#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(2); // Them gia tri vao stack
    st.push(3);
    cout << st.top()<< endl; // In ra gia tri tren cung
    st.pop() // Xoa gia tri tren cung
    cout << st.size() << endl; // Co cua stack
    st.empty(); // Check ham rong khong
    while(!st.empty){
        cout << st.top(); // In ra tung gia tri cua stack 
        st.pop();
    }
}