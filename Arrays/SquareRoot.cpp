#include <iostream>
using namespace std;

double rootDecimals(double answer, double x, int precision) {
    int deci = precision; double t = 1; //  deci : maximum decimal digits
    while (deci > 0) {
        t = t/10;
        for (double i=t; i<=t*9; i=i+t) {
            answer = answer+t;
            if (answer*answer == x)
                return answer;
            else if (answer*answer > x)
                answer=answer-t;
        }
        deci--;
    }
    return answer;
}

double squareRoot(int x, int precision) {
    int start = 0, end = x;
    int mid;
    double answer;
    while (start <= end) {
        mid = start + (end-start)/2;
        if (mid*mid == x)
            return mid;
        if (mid*mid > x)
            end = mid-1;
        else {
            answer = mid;   // There are some possibilities that the MID will be the root as its the number which is in the range of the target when squared with itself, so, tentatively considering mid as answer if it lies within the valid range when squared
            start = mid+1;
        }
    }
    answer = rootDecimals(double(answer), double(x), precision);
    return answer;
}

int main() {
    int num, precision;
    cout << "Enter a Number: ";
    cin >> num;
    cout << "Precision: ";
    cin >> precision;
    cout << "Sqrt(" << num << "): " << squareRoot(num, precision) << endl;
    return 0;
}