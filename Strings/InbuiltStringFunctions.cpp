
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str1[10]="sushil", str2[10]="akash";
    cout << "Length of String1: " << strlen(str1) << endl;
    cout << "String Compare: " << strcmp(str1, str2) << endl;
    cout << "String Copy: " << strcpy(str1, str2) << endl; // String getting copied form str2 to str1

    string str3 = "SushilDikondwar", substr = "il";
    cout << "Substring found at pos: " << str3.find(substr)<< endl;
    cout << "String with removed Substring: " << str3.erase(str3.find(substr), substr.length()) << endl;
    return 0;
}

/*
    string.find(substr)
        The function returns the index of the first occurrence of sub-string,
        if the sub-string is not found it returns string::npos
        (string::pos is static member with value as the highest possible for the size_t data structure).
*/

/*
    string.erase(startPos_of_substr_to_be_removed, length_of_substr)
        The function erases a part of the string content, shortening the length of the string.
*/