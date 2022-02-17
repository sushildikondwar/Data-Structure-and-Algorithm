#include <iostream>
using namespace std;

int fibonacci(int n) {  //  Recursive Fibonacci
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return fibonacci(n-1)+fibonacci(n-2);
}

void fibonacci1(int n) { //  Iterative Fibonacci
	int x = 0, y = 1, temp;
	if (n == 0) {
		cout << 0;
		return ;
	}
	else if (n == 1) {
		cout << 0 << " " << 1;
		return ;
	}
	else {
		cout << x << " " << y << " ";
		for (int i=2; i<=n; i++) {
			temp = x+y;
			cout << temp << " ";
			x = y;
			y = temp;
		}
	}
}

int main() {
	int n;
	cin >> n;

    cout << "Recursive: " << endl;
	for (int i=0; i<=n; i++)
		cout << fibonacci(i) << " ";

    cout << endl;
    
	cout << "Iterative: " << endl;
    fibonacci1(n);

	return 0;
}