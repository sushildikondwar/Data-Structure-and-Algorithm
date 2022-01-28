
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
    s2 = "acaafabcagsgbgxbgbgxxcbooo";

    for (int i=0; i<s1.length(); i++)   /* counting the characters in search string */
        count1[s1[i]-'a']++;
    
    int i=0;

    while (i+s1.length() <= s2.length()) {   /* Search Window */
        int j;
        for (j=i; j<i+s1.length(); j++) {
            int k=i;
            count2[s2[j]-'a']++;
            cout << s2[j];
        }
        if (checkEquality(count1, count2)) {
            cout << "  <--  Permutation found!";
            return 0;
        }
        cout << endl;
        while ( --j >= i ) {
            count2[s2[j]-'a']--;
        }
        i++;                                /* Advancing the Window */
    }
    cout << endl << "Permutation not found!";
    return 0;
}
