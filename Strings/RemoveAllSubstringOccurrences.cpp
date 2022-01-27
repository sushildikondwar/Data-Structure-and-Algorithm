
#include <iostream>
using namespace std;

string removeOccurrences(string str, string subStr) {
    while (str.length() > 0) {
        if (str.find(subStr) > str.length())    //  If 'part' not found in 's'
            return str;
        str.erase(str.find(subStr), subStr.length());
    }
    return str;
}

int main() {
    string str = "axxxxyyyyb", substr = "xy";
    cout << "Original String: " << str << endl;
    cout << "Removed (" << substr << "): ";
    cout << removeOccurrences(str, substr) << endl;
    return 0;
}

/*    string.find(substr)
        The function returns the index of the first occurrence of sub-string,
        if the sub-string is not found it returns string::npos
        (string::pos is static member with value as the highest possible for the size_t data structure).
*/

/*    string.erase(startPos_of_substr_to_be_removed, length_of_substr)
        The function erases a part of the string content, shortening the length of the string.
*/