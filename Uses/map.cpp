#include<bits/stdc++.h>
using namespace std;
// map<datatype1, datatype2> m;
// size() : So luong phan tu cua map
// Nhap phan tu vao map dung for each, iterator, insert, pair
//first : key
// second : value
// map<key, value>
// find: Thong qua tim kiem key
// count : Tim key
int main(){
    map<int , int> mp;
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        mp[x]++;
    }
    
    mp[100] =200; //(100,200)
    mp[200]= 300; //(200,300)
    mp.insert({300,400});
    mp.insert({400,500});
    cout << mp.size() << endl;
    for(auto x:mp){
        cout << x.first << " " << x.second << endl;
    }
    for(map<int, int>::iterator it = mp.begin();it !=mp.end; it++){
        cout << *it.first << " " << *it.second << endl;
    }
    return 0;
}