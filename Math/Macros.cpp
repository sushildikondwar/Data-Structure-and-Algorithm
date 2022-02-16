/*	How MACRO works?
	MACRO gets implemented before the code compilation,
	whereever macro is written in code, its value get replaced with it, 
	then the execution of the code takes place	*/
#include <iostream>
#define SUSHI 8599	//This is a MACRO
#define PI 3.14
using namespace std;

/*	Advantages:
	1. Macro doesn't occupy spaces as general variables
	2. Macros are immutable (unlike variables),
	   i.e.,nothing can change the value of macro while code execution	*/

int main() {
	cout << SUSHI * SUSHI + SUSHI << endl;

	int n = SUSHI;
	n = SUSHI * PI;

	cout << n << endl;

	return 0;
}