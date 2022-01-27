#include <iostream>
using namespace std;

void swapAlternate (int arr[], int size) {
    for (int i=0; i<size; i=i+2) {
        if (i+1 < size) {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    cout<<endl;
}

void printArr (int arr[], int size) {
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {

    int evenArr[] = {1,2,3,4,5,6,7,8,9,10};
    int oddArr[] = {1,2,3,4,5,6,7,8,9,10,11};

    printArr(evenArr, 10);
    swapAlternate(evenArr, 10);
    printArr(evenArr, 10);

    cout<<endl<<endl;

    printArr(oddArr, 11);
    swapAlternate(oddArr, 11);
    printArr(oddArr, 11);
    return 0;
}