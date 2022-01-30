//  important unordered_set methods has been introduced,
//  how to initialise unordered_set, how to search an element inside it, what is .start() .end(), what is iterator
#include <iostream>
#include <string.h>
#include <unordered_set>

using namespace std;

string reverseVowels(string s) {
    int i=0, j=s.length()-1;
    unordered_set<char> chrset = {'a','e','i','o','u','A','E','I','O','U'};
    while (i < j) {
        if (chrset.find(s[i]) == chrset.end())  //  .find(_) returns the index of element if found, orelse it returns iterator next to the last element, i.e., out of the search space
            i++;
        else if (chrset.find(s[j]) == chrset.end()) //  if == .end(_) means, char not found in vowel-set
            j--;
        else {  //  if both ith and jth char found in vowel-set
            swap(s[i], s[j]);   //  swap both vowels
            i++; j--;   //  and move further
        }
    }
    return s;
}

int main() {
    string str = "vowelvowel";
    cout << "Input: " << str << endl;
    cout << "Output: " << reverseVowels(str) << endl;
    return 0;
}