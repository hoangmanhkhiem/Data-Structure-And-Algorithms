#include<bits/stdc++.h>
using namespace std;
// pair dung de luu cac cap so
// pair<datatype1, datatype2> p;
// p.first : datatype1
// p.second : datatype2
//make_pair(100,200) : Tao pair co 2 gia tri 
//{100,200} : Tao pair co 2 gia tri
//tuple< datatype1 , ...., datatype n> t : Khai bao ham tuple
// Khoi tao ham tuple bang make_tuple hoac {}

int main(){
    pair<int, int> p1 = make_pair(100,200);
    pair<long long, long long> p2;
    pair<string, int> p3;
    cout << p1.first << p1.second << endl;
    pair<pair<int, int>,int> v; // Khai bao 3 bien gia tri pair long nhau
    // De su dung nhieu phan tu cung 1 luc 
    // vi du khai bao 3 gia tri ta su dung tuple
    tuple< int, int, int> t{1,2,3};
    tuple< int, int, int> tmake_tuple(1,2,3);
    cout << get<0>(t) << endl; // truy cap gia tri thu 1 cua ham tuple

    return 0;
}