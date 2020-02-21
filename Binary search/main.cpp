#include<iostream>

using namespace std;

int binarySearch (const int A[], int length, int val) {

    int low, mid, high;

    low = 0;            // set initial value for low
    high = length - 1;  // set initial value for high

    /* perform binary search */
    while (low <= high) {
        mid = low + (high - low)/2; // update mid

        if (A [mid] > val) { // search left subarray for val
            high = mid - 1;  // update high
        }
        else if (A [mid] < val) { // search right subarray for val
            low = mid + 1;        // update low
        }
        else {           // val = A[mid]
            return mid;  // return index of val in A
        }
    }
}
int main() {
   int arr[] = {1, 3, 15, 18, 20, 25, 33, 36, 40,89};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int num = 89;
   int result= binarySearch(arr, n-1, num);
   (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result;
   return 0;
}
