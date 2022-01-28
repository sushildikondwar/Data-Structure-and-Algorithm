// Remark: Algorithm is under the time constraints but, Very Time-Consuming (~500ms)

#include <iostream>
using namespace std;

string removeDuplicates(string s) {

    for (int i=0; i<s.length()-1;) {

        if (s.length() < 2) //  return orelse, will throw arrayOutOfBound
            return s;

        if (s[i] == s[i+1]) {   //  remove succeeding element if equal
            s.erase(i, 2);
            if (i-1 >= 0)   //  and decrement pointer to check the equality of the preceeding element
                i--;
        }
        else {  //  move further if succeeding elements not equal
            i++;
        }
    }
    return s;
}

int main() {
    string s1 = "aababaab";

    cout << removeDuplicates(s1) << endl;
    return 0;
}