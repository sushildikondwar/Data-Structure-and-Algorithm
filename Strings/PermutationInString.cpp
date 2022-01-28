
#include <iostream>
using namespace std;

bool checkEquality(int count1[26], int count2[26]) {    /* checking char count equality in both arrays */
    for (int i=0; i<26; i++) {
        if (count1[i] != count2[i])
            return false;
    }
    return true;
}

int main() {
    string s1, s2;
    int count1[26] = {0};
    int count2[26] = {0};
    
    s1 = "abac";
    s2 = "acaafabcgsgbgxbgbgxxcbooo";

    for (int i=0; i<s1.length(); i++)   /* counting the characters in search string */
        count1[s1[i]-'a']++;
    
    int i=0;
    int windowSize = s1.length();

    //  Running First Window
    while (i < windowSize && i < s2.length()) {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if (checkEquality(count1, count2)) {
        cout << "Permutation found!";
        return 0;
    }

    //  Advancing the Window further
    while (i < s2.length()) {
        char newChar = s2[i];   //  next incoming char
        int index = newChar - 'a';
        count2[index]++;    //  new char count increment

        char oldChar = s2[i - windowSize];  // recently outOfWindow char
        index = oldChar - 'a';
        count2[index]--;    //  decrement recent outOfWindow char

        i++;

        if (checkEquality(count1, count2)) {    //  comparing char-counts of Window and S1
            cout << "Permutation found!";
            return 0;
        }
    }
    cout << endl << "Permutation not found!";
    return 0;
}
