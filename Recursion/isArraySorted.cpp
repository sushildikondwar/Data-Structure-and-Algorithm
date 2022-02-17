
#include <iostream>
using namespace std;

int isSorted(int arr[], int size) {
    if (size == 0 || size == 1) //  BASE CASE
        return true;
    if (arr[0] > arr[1])    //  if preceeding is greater than succeeding, therefore array not sorted
        return false;
    else {
        return isSorted(arr + 1, size - 1); //  moving the array pointer to its next element and decreasing the size of array
    }
}

int main() {
    int arr[] = {2,5,4,8,9,12,17};
    int size = sizeof(arr)/sizeof(arr[0]);

    if (isSorted(arr, size)) {
        cout << "Array is Sorted" << endl;
    }
    else {
        cout << "Array is not Sorted" << endl;
    }

    return 0;
}