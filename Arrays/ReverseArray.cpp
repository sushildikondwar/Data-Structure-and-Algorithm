#include <iostream>
using namespace std;

int main() {
    int arr[] = {3,1,6,2,8,9,7,9,3,5,2,4,1,5,8,7,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<size; i++)
        cout << arr[i] << " ";
    cout << endl;
    for (int i=0; i<size/2; i++) {
        arr[i]^=arr[size-1-i];
        arr[size-1-i]^=arr[i];
        arr[i]^=arr[size-1-i];
    }
    for (int i=0; i<size; i++)
        cout << arr[i] << " ";
    return 0;
}