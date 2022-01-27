
#include <iostream>
#include <string.h>
using namespace std;

/*Time Complexity: O(n)
  Space Complexity: O(1)*/
string replaceString(string str, string addStr) {   //  Replacing Inplace
    for (int i=0; i<str.length(); i++) {
        if (str[i]==' ') {
            str = str.substr(0, i) + addStr + str.substr(i+1, str.length()-i);
        }
    }
    return str;
}

int main() {
    string str="I am Sushil Dikondwar", addStr="@99";
    cout << replaceString(str, addStr) << endl;
    return 0;
}
