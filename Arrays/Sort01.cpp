// SORTING 0s and 1s USING TWO POINTER TECHNIQUE
#include <iostream>
using namespace std;

void twoPointerMagic (int arr[], int size) {
    int i = 0;
    int j = size-1;
    while (i<j) {
        while (arr[i] != 1) {
            i++;
        }
        while (arr[j] != 0) {
            j--;
        }
        if (i < j) {  //  edge condition
            arr[i]^=arr[j];
            arr[j]^=arr[i];
            arr[i]^=arr[j];
        }
    }
}

int main() {
    int arr[] = {1,0,1,0,1,0,0,1,1,0,1,0,1,0,1,1,0,1};
    int arrsize = sizeof(arr)/sizeof(arr[0]);
    cout<<"Original: ";
    for (int i=0; i<arrsize; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    twoPointerMagic(arr, arrsize);

    cout<<"Sorted:   ";
    for (int i=0; i<arrsize; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}