#include <iostream>
using namespace std;

int getMultiple(int *arr, int m) {
	int ans = 1;
	for (int i=0; i<m; i++) {
		ans = ans * arr[i];
	}
	return ans;
}

int main() {
	// BAD PRACTICE
	int n;
	cin >> n;
	int arr[n]; //	this is very very bad practice and should be avoided
	/*WHY?:
		There are two types of memories allocated after the compilation (Stack and Heap),
		If we did as given above, then the memory to the array will get allocated at the run time,
		let say, the user will enter the large value, then there might be chances that the stack memory will get full and program will unexpectedly get terminated
	*/

	// GOOD PRACTICE: Either provide the size of array to be used in program implicitly before compilation, so that the compiler will reserve the large space of Stack Memory while compilation,
	//OR,
	int m;
	cin >> m;
	int *arr1 = new int[m];	//	Allocate the memory dynamically from the Heap Memory (large bydefault) in runtime using 'new' keyword

	for (int i=0; i<m; i++)
		cin >> *(arr1+i);

	for (int i=0; i<m; i++)
		cout << *(arr1+i) << " ";

	cout << endl << endl;

	cout << "Multiple: " << getMultiple(arr1, m) << endl;

    delete []arr1; // deletes the space allocated on this pointer

	return 0;
}