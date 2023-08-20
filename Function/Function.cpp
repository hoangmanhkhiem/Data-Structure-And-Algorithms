#include<bits/stdc++.h>
// Algorithm function in STL
//min : Tim so nho hon trong 2 so hoac nhieu so
//max : Tim so lon hon trong 2 so hoac nhieu so
int main1(){
    cout << min(10,20) << " " << max(10,20) << endl;
    cout << min({1,2,3,4}) << " " << max({1,2,3,4}) << endl;
}
//min_element : Tim so nho nhat trong arr hoac vector
//max_element : Tim so nho nhat trong arr hoac vector
int main2(){
    int a[5]={1,2,3,4,5};
    cout << *min_element(a,a+5)<< endl;
    cout << *max_element(a,a+5)<< endl;
    vector<int> b ={1,2,3,4,5};
    cout << *min_element(begin(b),end(b));
    cout << *max_element(begin(b),end(b));
}
//accumulate : Tinh tong cac phan tu trong mang hoac mot vecto
int main3(){
    itn a[5]= {1,2,3,4,5};
    int sum = accumulate(a,a+5,0); // a+x ; a+y+1: Tinh tong tu chi so x toi chi so y
    vector<int> b= {1,2,3,4,5};
    cout << accumulate(begin(b),end(b),0) // n.begin()+x, b.begin()+y+1
}
//swap : Hoan doi gia tri cua 2 bien
int main4(){
    int x=100; y=200;
    swap(x,y);
}
//sort : Sap xep cac phan tu tang dan hoac giam dan hoac theo 1 y nao do
int main5(){
    int a[5]={1,3,4,5,2};
    sort(a,a+5,greater<int>()); // a+x,a+y+1;
    vector<int> b ={1,4,3,2,5};
    sort(begin(b),end(b),greater<int>());
    // greater<int>() co them ham nay thi sap xep theo thu tu giam dan
    string s[5] = {"a","b","c","r","1"};
    sort(s,s+5); // sap xep theo thu tu tang dan theo tu dien giam dan
}
//stable_sort: Mang co nhieu phan tu cung gia tri va sap xep va on dinh truoc sau
int main6(){
    int a[6] = {-1,3,1,-1,-2,-3};
    stable_sort(a,a+6,cmp);
}
//find : Tim kiem 1 phan tu nao do trong arr hoac vector va tra ve con tro den
//phan tu no tim thay hoac khong thay thi toi vi tri con tro cuoi cung
int main7(){
    int a[5]={1,2,1,3,4};
    auto it = find(a,a+5,3);
    if(it == a+5) cout << " FOUND";
    else cout << " NOT FOUND";
    vector<int> b ={1,2,1,3,5};
    auto it = find(b.begin(),b.end(),5);
    if(it==b.end()) cout << "NOT FOUND";
    else cout << "FOUND";
}
// Ap dung cho mang chua co thu tu
//binary_search : Ap dung cho arr hoac vector da duoc sap xep tang hoac giam
int main8(){
    int a[5] = {1,2,3,4,5};
    if(binary_search(a,a+5,2)) cout << "FOUND";

    vector<int> b = {1,2,3,4,5};
    if(binary_search(begin(b),end(b),2)) cout << "FOUND";
}
//lower_bound : Ap dung cho arr hoac vector da duoc sap xep va ap dung cho set va map
// Tra ve con tro tai phan tu dau tien lon hon hoac bang x
// >=x
int main9(){
    int a[6]={1,1,2,2,3,5};
    auto it = lower_bound(a,a+6,2);
    cout << *it << endl; // Gia tri cua phan tu thoa man
    cout << it-a << endl; // Tra ve chi so cua gia tri thoa man

    vector<int> b={1,1,2,2,3,4};
    auto it = lower_bound(begin(b),end(b),2);
    cout << *it << endl;
    ciut << it - begin(b) << endl;
}
//upper_bound : Ap dung cho arr hoac vector da duoc sap xep va ap dung cho set va map
// Tra ve con tro tai phan tu dau tien lon hon x
// >x
int main10(){
    int a[6]={1,1,2,2,3,5};
    auto it = upper(a,a+6,2);
    cout << *it << endl; // Gia tri cua phan tu thoa man
    cout << it-a << endl; // Tra ve chi so cua gia tri thoa man

    vector<int> b={1,1,2,2,3,4};
    auto it = upper(begin(b),end(b),2);
    cout << *it << endl;
    ciut << it - begin(b) << endl;
}
//memset : Co mot array a muon gan tat ca phan tu cua mang la 0 hoac -1
int main11(){
    int a[6]={1,1,2,2,3,5};
    memset(a,0,sizeof(a));
}
//fill : Gan cac phan tu trong array hoac vector 1 gia tri nao do
int main12(){
    int a[6]={1,1,2,2,3,5};
    fill(a,a+6,1000);

    vector<int> b={1,1,2,2,3,4};
    fill(a.begin(),a.end(),1000);
}
//merge : Tron 2 array hoac 2 vector lai voi nhau trong truowng hop sap xep tang dan
int main12(){
    vector<int> b={1,1,2,2,3,4};
    vector<int> a={1,4,6,7,20};
    vector<int> res(11);
    merge(a.begin(),a.end(),b.begin(),b.end(),res.begin());
}
//reverse : De lat nguoc 1 array hoac 1 vector hoac 1 string
int main13(){
    int a[5]={!,2,3,4,5};
    reverse(a,a+5);
    string s= "khiem";
    reverse(begin(s),end(s));
}
//LUU Y: 4 thuat toan set truoc khi su dung phai dung sort
//set_union : Co 2 tap hop muon tim ra hop cua 2 tap do thi dung set_union
int main14(){
    int a[]={1,2,3,4,5};
    int b[]={1,3,4,5,6,7};
    vector<int> u(11);
    auto it = set_union(a,a+5,b,b+6,u.begin());
    u.resize(it - u.begin());
}
//set_intersection : Co 2 tap hop muon tim ra giao cua 2 tap hop
int main15(){
    int a[]={1,2,3,4,5};
    int b[]={1,3,4,5,6,7};
    vector<int> u(11);
    auto it = set_intersection(a,a+5,b,b+6,u.begin());
    u.resize(it - u.begin());
}
//set_diffenrence: Lay ra phan tu thuoc mang a ma khong thuoc mang b
int main16(){
    int a[]={0,2,3,4,8};
    int b[]={1,3,4,5,6,7};
    vector<int> u(11);
    auto it = set_diffenrence(a,a+5,b,b+6,u.begin());
    u.resize(it - u.begin());
}
//set_symmetric_difference : Lay phan tu khong phai giao cua 2 tap hop
int main14(){
    int a[]={0,2,3,4,8};
    int b[]={1,3,4,5,6,7};
    vector<int> u(11);
    auto it = set_symmetric_difference(a,a+5,b,b+6,u.begin());
    u.resize(it - u.begin());
}