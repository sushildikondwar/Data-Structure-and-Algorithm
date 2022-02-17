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


int main() {
	int n = 10;
	count(n);
	cout << endl;
	count1(n);

	return 0;
}