
#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int target) {
	if (size == 0)  //  BASE CASE
		return false;
	if (*arr == target) //  if target found, return true
		return true;
	return linearSearch(arr+1, size-1, target);
}

int main() {
    int arr[] = {2,3,10,8,9,12,17};
    int size = sizeof(arr)/sizeof(arr[0]);
    if (linearSearch(arr, size, 0)) {
        cout << "Item found" << endl;
    }
    else {
        cout << "Item not found" << endl;
    }

    return 0;
}