#include <iostream>
using namespace std;

int main() {
	int arr[] = {5,2,3,6,7,8};
	cout << arr << endl;
	cout << *arr+1 << endl;
	cout << *(arr+2) << endl;


	int *arrptr = arr;
	cout << arrptr << endl;

	cout << arrptr++ << endl;	//	here, the pointer is getting traversed over the array
	cout << arrptr++ << endl;

	// BUT, IF WE TRY TO INCREMENT THE ARRAY POINTER ITSELF,
	// cout << arr++ << endl;	// it'll throw an error

	if (arr[2] == 2[arr]) {
		cout << "Both the statements are equal and legit!!" << endl;
	}

	char ch[] = "sushildikondwar";
	cout << ch << endl;
	cout << sizeof(ch) << endl;

	char *c = ch;
	cout << c << endl;	//	char ptr will print the characters till it not find null pointer

	char *cptr = "s";
	cout << cptr << endl;

	char *chptr = "sushil";	//	THIS IS A BAD PRACTICE, AS IT CAN ALSO ACCESS THE READ-ONLY MEMORY
	cout << chptr << endl;

	// /////////////////////////////////////////////

	char cha = 's';	//	even there's a single character
	char *ptr = &cha;	//	the reference pointer will treat it as string and will print the characters till it not find null pointer
	cout << ptr << endl;	//	and in this case, it eventually prints some garbage value

	////////////////////////////////////////////////

	return 0;
}