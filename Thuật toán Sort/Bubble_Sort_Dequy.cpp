// C++ code for recursive bubble sort algorithm
#include <iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
	if (n == 0 || n == 1) {
		return;
	}
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] > arr[i + 1]) {
			swap(arr[i], arr[i + 1]);
		}
	}
	bubblesort(arr, n - 1);
}
int main()
{
	int N,x,i;
    cin >> N;
    int arr[N];
    for (i = 0; i < N; i++) cin >> arr[i];
	bubblesort(arr, N);
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
// code contributed by pragatikohli
