/* Logic: Roman numerals are usually written largest to smallest from left to right. 
          However, the numeral for four is not IIII. Instead, the number four is written as IV. 
          Because the one is before the five we subtract it making four. */
#include <iostream>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> dict {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
    };

    int result = 0;
    for (int i = 0; i < s.size(); i++) {
        if (dict[s[i]] < dict[s[i + 1]])
            result -= dict[s[i]];
        else {
            result += dict[s[i]];
        }
    }

    return result;
}

int main() {
    string s = "VI";
    cout << "Roman: " << s << " :: Int: " << romanToInt(s) << endl;
    return 0;
}