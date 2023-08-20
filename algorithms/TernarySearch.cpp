#include<iostream>
using namespace std;

int ternaryI(int a[], int target, int n)
{
    int l = 0;
    int r = n-1;

    while( r-l>=0 ) {
        int partiton = (r-l)/3;
        int mid1 = l + partiton;
        int mid2 = r - partiton;

        if ( target == a[mid1])
            return mid1;
        else if ( target == a[mid2])
            return mid2;
        else if ( target < a[mid1] )
            r = mid1-1;
        else if ( target > a[mid2] )
            l = mid2+1;
        else {
            l = mid1+1;
            r = mid2-1;
        }
    } // while ends

    return -1;
} // function ends



int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int target = 7;

    int tsi = ternaryI(arr, target, n);
    cout << "Result of TSI = " << tsi << endl;

    return 0;
} // main ends