#include <iostream>
using namespace std;

int main() {
	int arr[] = {5,2,3,6,7,8};
	cout << arr << endl;
	cout << *arr+1 << endl;
	cout << *(arr+2) << endl;

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

	return 0;
}