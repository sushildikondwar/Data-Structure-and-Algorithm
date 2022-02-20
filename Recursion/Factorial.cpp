#include <iostream>
using namespace std;

void count(int n) {
	if (n == 0)		//	BASE CASE
		return ;
	count(n-1);			//	Head Recursion (recursion before processing)
	cout << n << "-";
}

void count1(int n) {
	if (n == 0)		//	BASE CASE
		return ;
	cout << n << "-";
	count1(n-1);		//	Tail Recursion (Recursion after all processing)
}

long long int factorial(int a) {
	if (a == 0) 
		return 1;
	return a*factorial(a-1);
}


int main() {
	int n = 21;
	count(n);
	cout << endl;
	count1(n);
	cout << endl << "Factorial " << n << ": " << factorial(n) << endl;

	return 0;
}