// C++ code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1
 
#include <iostream>
using namespace std;
 
int search(int arr[], int N, int x)
{
    int i;
    for (i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
// Thuật toán tìm kiếm bằng cách xét từng chỉ số của mảng.
// Driver's code
int main()
{
    int n,x,i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++) cin >> arr[i];
    cin >> x;
 
    // Function call
    int result = search(arr, n, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}