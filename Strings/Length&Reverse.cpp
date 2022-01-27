
#include <iostream>
using namespace std;

void reverseString(char str[], int size) {
    int s=0;
    int e=size-1;
    while (s<e)
        swap(str[s++],str[e--]);
}

int stringLength(char str[]) {
    int count=0;
    while (str[count] != '\0')
        count++;
    return count;
}

int main() {
    char str[20];
    cout << "Enter a String: ";
    cin >> str;

    cout << "Length of String is " << stringLength(str) << endl;

    reverseString(str, stringLength(str));

    cout << "Reversed String = " << str << endl;
    return 0;
}