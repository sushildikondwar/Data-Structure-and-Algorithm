
#include <iostream>
using namespace std;

bool isArraySortedAndRotated(int arr[], int size) {
    int breakageCount = 0;
    for (int i=1; i<size; i++) {
        if (arr[i-1] > arr[i])
            breakageCount++;
    }
    if (arr[0] < arr[size-1])
        breakageCount++;

    return breakageCount<=1;
}

// bool checkIfSortedAndRotated(int arr[], int size) {
//     int i = size-1;
//     bool ans = true;
//     while (i >= 0) {
//         if (arr[i] >= arr[i-1]) {
//             i--;
//         }
//         else {
//             i--;
//             break;
//         }
//     }
//     while (i > 0 ) {
//         if (arr[i] >= arr[i-1]) {
//             i--;
//         }
//         else {
//             ans = false;
//             break;
//         }
//     }
//     if (arr[0] < arr[size-1])
//         ans = false;
//     return ans;
// }

int main() {
    int arr[] = {2,1,3,4};
    isArraySortedAndRotated(arr, sizeof(arr)/sizeof(arr[0])) ? cout << "True" : cout << "False";
    return 0;
}