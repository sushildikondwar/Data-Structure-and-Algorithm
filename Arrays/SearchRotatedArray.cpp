#include <iostream>
using namespace std;

int findPivotLocation(int arr[], int size) {
    int start = 0, end = size-1;
    int mid;
    while (start < end) {
        mid = (start+end)/2;
        if (arr[mid] >= arr[0]) {   //  greater than ke saath [EQUAL TO] Nahi diya to agar sirf only starting element agar sabse bada hoga to output galat aayega ex: {9, 1, 2, 3, 5, 6}
            start = mid+1;
            if (arr[start] < arr[0])
                return start;
        }
        else
            end = mid;
    }
    return end;
}

int binarySearch(int arr[], int start, int end, int target) {
    int mid;
    while (start <= end) {
        mid = (start+end)/2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] > target) {
            end = mid-1;
        }
        else {
            start = mid+1;
        }
    }
    return -1;
}

int searchTargetLocation(int arr[], int size, int pivot, int target) {
    if (target >= arr[0])   // EDGE CONDITION: EQUAL TO sign is important
        return binarySearch(arr, 0, pivot-1, target);
    else
        return binarySearch(arr, pivot, size-1, target);
    return -1;
}

int main() {

    int arr[] = {100, -2, 6, 10, 11};  //  Sorted Rotated Array
    int size = sizeof(arr)/sizeof(arr[0]);
    int pivot = findPivotLocation(arr, size);
    cout << "Pivot Location: " << pivot << endl;
    cout << "Target Location: " << searchTargetLocation(arr, size, pivot, 100) << endl;

    return 0;
}

// Note: This won't work if the array contains only a single element, as it doesn't satisfies the rotated array nature