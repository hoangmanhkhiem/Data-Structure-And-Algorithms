#include<bits/stdc++.h>

using namespace std;
 //priority_queue : Luon duy tri mot thu tu sao cho phan tu o top queue
 //luon la so lon nhat hoac nho nhat
//push : day 1 pt vao pq
//size : So luong gia tri
// empty : Check rong hay khon
//pop : Xoa phan tu o dau
//top : Lay ra phan tu o dau, mac dinh la lon nhat
//
 int main(){
    priority_queue<int> pq; // Khai bao hang doi uu tien mac dinh lon nhat
    priority_queue<int, vector<int>,greater<int>()> pq2; // Mac dinh la be nhat
    pq.push(1);
    pq.push(4);
    pq.push(3);
    pq.push(5);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl; // In ra value lon nhat
 }