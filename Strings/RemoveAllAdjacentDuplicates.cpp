//  Used Stack Rule (Very Efficient and Intuitive Technique)
#include <iostream>
using namespace std;

string removeDuplicates(string s) {
    string ans;     //  for answer storage
    int i = 0;
    while (i < s.length()) {    //  index traversing
        if (ans.length() == 0)      //  if string is empty, then push char and move the pointer
            ans.push_back(s[i]);
        else if (ans.back() == s[i])    //  if incoming char found same as the last char element in ans string
            ans.pop_back();             //  then pop that element from the ans string and move the pointer
        else
            ans.push_back(s[i]);    //  if chars are not adjacently equal, then simply push the char into ans and move the pointer
        i++;
    }
    return ans;
}

int main() {
    string s1 = "aababaab";
    cout << removeDuplicates(s1) << endl;
    return 0;
}