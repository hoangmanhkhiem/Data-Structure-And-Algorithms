#include<bits/sdtc++.h>
#include<algorithm>
using namespace std;
//Linear Search: O(n)
// Neu nhu tim kiem 1 gia tri cua 1 phan tu nao do trong mang thi no duyet
// Tu dau toi cuoi
//
bool ls(int a[], int n, int x){
    for (int i = 0; i < n; i++)
    {
        if(a[i]==x) return true;
    }
    return false;
}
//Binary search O(logn):
// Tim kiem 1 phan tu nao do trong mang
// Luu y: Mang do phai duoc sap xep tang dan hoac giam dan
//

int main(){
    return 0;
}