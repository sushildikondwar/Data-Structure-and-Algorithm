
#include <iostream>
using namespace std;

void printArray(int *arr, int s, int e) {
	cout << endl;
    for (int i = s; i <= e; i++) {
        cout << *(arr+i) << " ";
    }
}

bool binarySearch(int *arr, int s, int e, int target) {
// BinarySearch Execution Printer
printArray(arr, s, e);

    if (s > e)
        return false;

    int mid = s + (e-s)/2;
    if (arr[mid] == target)
        return true;
    if (arr[mid] > target)
        return binarySearch(arr, s, mid-1, target);
    else
        return binarySearch(arr, mid+1, e, target);
}

int main() {
    int arr[] = {2,3,5,8,9,12,17,23,27,31};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 31;

    if (binarySearch(arr, 0, size-1, target)) {
        cout << endl << "Item found" << endl;
    }
    else {
        cout << endl << "Item not found" << endl;
    }

    return 0;
}