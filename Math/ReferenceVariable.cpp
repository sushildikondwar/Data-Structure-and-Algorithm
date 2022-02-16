/*reference variable: memory same, but names different*/

#include <iostream>
using namespace std;

void multiple(int &x, int mult = 15) {	//	but receiving the variable's reference
	x*=mult;
}

/*	BAD PRACTICE
int &func(int a) {	//	returning the reference of the item inside function's scope
	int num = a;
	int &ans = num;
	return ans;
}	//	its a bad practice because, as the function terminates, their will be no existance of the reference variable at its address 
*/

int main() {
	int i = 17;
	cout << i << endl;
	int &j = i;	//	reference variable is used to give the new name to the pre-existing variable
	cout << j << endl;

	i++;
	cout << j << endl;

	int n=100;
	multiple(n);	//	passing the int variable
	cout << n << endl;

	multiple(n, 87);
	cout << n << endl;

	return 0;
}