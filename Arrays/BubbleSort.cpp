// BUBBLE SORT
#include <iostream>
using namespace std;

// Swap with immediate next if its value is less, eventually takes the max value to last position
// TimeComplexity, Big O = O(n^2)
void bubbleSort(int arr[], int size) {
    int n = size-1;
    while (n > 0) {
        bool swapped = false;   //  Optimising the code
        for (int i=0; i<n; i++) {
            if (arr[i] > arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                swapped = true;
            }
        }
        if (!swapped)   //  If swapping doesn't occur, means, array is sorted, therefore, no further checks
            break;
        n--;
    }
}

int main() {
    int arr[] = {6,3,5,8,7,4,1,5,9,6,8,5,6,3,2,1,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, size);
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}