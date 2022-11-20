#include<bits/stdc++.h>
#include<deque>
//stack LIFO
//queue FIFO
//deque double end queue
//size : Co bao nhieu phan tu
//push_front(): Day vao dau 
//push_back() : Day vao cuoi
//pop_front() : Xoa 1 pt o dau
//pop_back(): Xoa 1 pt o cuoi
//empty(): Check xem deque rong khon
//front() : Lay ra phan tu o dau
//back() : Lay ra phan tu o cuoi
using namespace std;
int main(){
    deque<int> q;
    q.push_front(2);
    q.push_back(3);
    q.push_back(4);
    q.push_back(5);
    q.push_front(1);
    q.pop_front();
    cout << q.front() << q.back() << endl;
    q.pop_back();
    cout << q.back();
}