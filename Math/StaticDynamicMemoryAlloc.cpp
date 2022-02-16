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
    //////////////////////DYNAMIC 1D///////////////////////////////////////////////////////
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

    //////////////////////DYNAMIC 2D///////////////////////////////////////////////////////

	/*	for making 1D array, ( int *arr = new int[n] ), i.e., array is denoted by (int*)	*/

	/*	for making 2D array, we'll make 'm' spaces to store pointers to 'm', (int **arr = new int*[m])
		we created 'm' spaces to store the starting pointers of arrays, now we need to allocate array starting addresses,
		simply iterate over a loop, and form new array of size 'n' each time, and store its address to the iterating index	*/

	int row=3, col=3;
	int **matrix = new int*[row];
	for (int i=0; i<row; i++) {
		matrix[i] = new int[col];
	}

	//	fill matrix
	for (int i=0; i<row; i++)
		for (int j=0; j<col; j++)
			cin >> matrix[i][j];

	//	print matrix
	cout << endl << "Matrix: " << endl;
	for (int i=0; i<row; i++) {
		for (int j=0; j<col; j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}

    ///////releasing 2D Array memory////////
    for (int i=0; i<row; i++)
        delete []matrix[i];
	delete []matrix;

	return 0;
}