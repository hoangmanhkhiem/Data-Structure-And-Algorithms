#include<bits/stdc++.h>
using namespace std;
//O(logn)
//set<datatype> s;
//insert : Them gia tri vao set
//Neu insert mot phan tu da co thi khong them nua
//s.size(): Do rong cua set
//s.find : tim phan tu dua vao chi so tu be den lon da sap xep day nhap vao theo thu tu tu be den lon
// Neu dung find khong co gia tri do thi se tra ve begin
// find(data) != s.end() thi co gia tri do con khong thi khong co gia tri do
//count : Tim phan tu trong set
//Erase : Xoa phan tu trong set
// Order
// multiset<int> ten; : Dung multiset thi cac gia tri giong nhua van duoc lap lai

// Cho mang co n phan tu va so nguyen k, doi voi moi day con lien tiep co chieu 
// dai k. In ra duoc phan tu lon nhat trong day con do
// Input 10 3
// 1 2 3 4 5 6 7 8 9 10
// Output 
// 3 3 4 5 8 9 10
// De giai bai nay thi nen dung multiset 
//unordered_set
int unordered_set(){
    unordered_set<int> s;
    for (int i = 0; i < 10; i++)
    {
        s.insert(i);
    }
    for(auto x:s){
        cout << x >> endl;
    }
    
}
int baitapms(){
    int n,k;
    cin >> n >>k;
    int a[n];
    for (int &x :a)
    {
        cin >> x;
    }
    multiset<int> ms;
    for (int i = 0; i < k; i++)
    {
        ms.insert(a[i]);
    }
    for (int i = k; i < n; i++)
    {
        cout << *ms.rbegin() << " ";
        ms.erase(ms.find(a[i-k]));
        ms.insert(a[i]);
    }
    cout << *ms.rbegin() << "  "<< endl;
    
    
}
int main2(){
    multiset<int> s1;
    s1.insert(100);
    s1.insert(200);
    s1.insert(300);
    s1.insert(100);
    cout << s1.size() << endl;
    for(int x:s1){
        cout << x << endl;
    }
    // Chu y neu dung erase trong multiset thi no se xoa het nhung gia tri ma can xoa
    // Neu muon xoa 1 gia tri 1 trong 2 cai cung gia tri thi phai dung iterator

}
int main(){
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++) // Dung vong lap de insert gia tri vao set
    {
        int x; cin >> x;
        s.insert(x);
    }
    
    for (int i = 0; i < 10; i++)
    {
        s.insert(i);
    }
    s.erase(5); // Xoa gia tri 5 hoac xoa gia tri iterator
    for(int x: s){ // Dung for x de duyet set
        cout << x << endl;
    }
    return 0;
}