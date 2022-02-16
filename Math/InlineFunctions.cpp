/*  IMPLEMENTATION: Inline function is a function with a preceeding 'Inline' keyword  */
/*  WORKING: Inline function works same as MACRO.
	It works at its best only when the function body contains a single statement.
	Whereever the inline function call is written in the code,
	the statement inside the function defination replaces the function call  */
#include <iostream>
using namespace std;

inline int getBigger(int a, int b) {
	return (a>b ? a : b);
}

/*	ADVANTAGES: Function Call Overhead is removed, as before the compilation of code,
	the single statement inside the inline function gets replaced in place of the inline function call*/

int main() {
	int a, b;
	a = 15;
	b = 9;

	cout << getBigger(a, b) << endl;
	return 0;
}