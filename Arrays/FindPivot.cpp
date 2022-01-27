#include <iostream>
using namespace std;

int findPivotLocation(int arr[], int size) {
    int start = 0, end = size-1;
    int mid;
    while (start < end) {
        mid = (start+end)/2;
        if (arr[mid] > arr[0]) {
            start = mid+1;
            if (arr[start] < arr[0])
                return start;
        }
        else
            end = mid;
    }
    return end;
}

int main() {
    int arr[] = {7, 9, 11, 1, 2, 3, 5, 6};  //  Sorted Rotated Array
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Pivot Location: " << findPivotLocation(arr, size);
    return 0;
}