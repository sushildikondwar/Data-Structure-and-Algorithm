
#include <iostream>
using namespace std;

char toLowerCase(char ch) {
    if (!(ch >= 'a' && ch <= 'z'))
        return (ch-'A'+'a');
    return ch;
}

bool checkPalindrome(string str) {  //  ignoring special characters and whitespaces
    int i=0, j=str.length()-1;
    while (i < j) {
        if (!((toLowerCase(str[i]) >= 'a' && toLowerCase(str[i]) <= 'z') || (str[i] >= 48 && str[i] <= 57)))
            i++;
        else if (!((toLowerCase(str[j]) >= 'a' && toLowerCase(str[j]) <= 'z') || (str[j] >= 48 && str[j] <= 57)))
            j--;
        else if (toLowerCase(str[i]) != toLowerCase(str[j]))
            return false;
        else {
            i++; j--;
        }
    }
    return true;
}

int main() {
    string str;
    str = "N2 i&nJA?a& jnI2n";
    // cin >> str;
    if (checkPalindrome(str))
        cout << "String is Palindrome";
    else
        cout << "String is not Palindrome";
    return 0;
}