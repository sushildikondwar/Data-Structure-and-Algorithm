// SELECTION SORT
#include <iostream>
#include <limits.h>
using namespace std;

// Select the minimum element and swap with the front element and repeat
// Time Complexity, Big O = O(n^2)
void selectionSort(int arr[], int size) {
    int minIndex;
    for (int i=0; i<size-1; i++) {
        minIndex = i;
        for (int j=i+1; j<size; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[] = {5,2,6,3,4,1,7,8,5,9,6,3,2,5,4,1,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<size; i++)
        cout << arr[i] << " ";

    cout << endl;
    selectionSort(arr, size);

    for (int i=0; i<size; i++)
        cout << arr[i] << " ";
    return 0;
}