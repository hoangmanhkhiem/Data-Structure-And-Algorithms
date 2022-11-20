#include<bits/stdc++.h>
using namespace std;
//FIFO
//push Day vao cuoi hang doi
//pop Xoa gia tri dau hang doi
//empty Check hang doi rong
//size Do rong cua hang doi
//front
int main(){
    queue<int> q;
    q.push(1);
    q.push(2); // Them gia tri vao cuoi hang doi
    q.push(3);
    q.push(4);
    cout << q.front() << endl; // In ra gia tri tai dau hang doi
    q.pop(); // Xoa gia tri o dau hang doi
}