/*  Using Euclid's Algorithm : [ gcd(a,b) = gcd(a-b, b) ]   */
#include <iostream>
using namespace std;

int gcd (int m, int n) {
	while (m != n) {
		if (m >= n) {
			m = m-n;
		}
		else {
			n = n-m;
		}
	}
	return m;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
	return 0;
}

/*  Special Relation for future reference:   [ lcm(a, b) * gcd(a, b) = a*b ]    */
