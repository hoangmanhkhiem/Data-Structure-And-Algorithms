#include<bits/stdc++.h>

using namespace std;

//vector<kieu du lieu> ten_vector
//push_back() : Day mot phan tu vao vector
//size() : Kich thuoc cua vector
// v[i] : khai bao gia tri tai chi so vector
//Duyet cac phan tu bang for each, iterator, auto

int main(){
    int n; vector<int> v(n); // Khai bao vecto nhung da co n phan tu v[n]
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];// Dung for de nhap phan tu vao vecto khi co n phan tu
    }
    vector<int> v; // Khai bao vecto
    vector<int> v(n,100); // Khai bao vector co n phan tu deu co gia tri la 100
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        v.push_back(x); // Dung for de nhap phan tu vao vecto khi khong co n phan tu
    }
    
    v.push_back(10); // Day phan tu 10 vao vector
    v.push_back(20);
    v.push_back(50);
    v.push_back(100);
    cout << v.size() << endl; // In ra do rong vector
    cout << v[0] << endl; // In ra gia tri chi so dau tien cua vector
    cout << v[v.size()-1] << " " << v.back() << endl; // In ra phan tu cuoi cung cua vector
    for(int i=0; i < v.size();i++){ // Duyet bang for thuong
        cout << v[i] << endl;
    }
    for(int x:v){ // Duyet bang x 
        cout << x << endl;
    }
    for(vector<int> :: iterator it = v.begin(); it !=v.end();++it){ 
        //Lap bang toan tu iterator
        cout << *it << endl;
    }
    for(auto it = v.begin(); it !=v.end();++it){ 
        //Lap bang auto
        cout << *it << endl;
    }
    cout << v[2] << " " << *(v.begin()+2) << endl; // Dua ra gia tri tai chi so 

    return 0;
}

// Tach cac tu bang vector

int main1(){
    string s=" Hoang manh khiem";
    stringstream ss(s); // truy xuat du lieu 
    string tmp;
    vector<string> vt;
    while(ss>> tmp){
        vt.push_back(tmp);
    }
    for(string x:vt){
        cout << x<< endl;
    }
}