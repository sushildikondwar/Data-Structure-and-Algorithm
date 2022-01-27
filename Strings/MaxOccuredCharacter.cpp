
#include <iostream>
#include <unordered_map>
using namespace std;

int maxOccuredIndex(int arr[], int arrSize) {
    int max_index = 0;
    for (int i=1; i<arrSize; i++) {
        if (arr[i] > arr[max_index])
            max_index = i;
    }
    return max_index;
}

char maxOccuredChar(string str) {
    int target;
    int logical_container[26] = {0};
    for (int i=0 ;i<str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            target = str[i] - 'a';
        else
            target = str[i] - 'A';
        logical_container[target] += 1;
    }
    int max_occured_pos = maxOccuredIndex(logical_container, 26);
    return 'a' + max_occured_pos;
}

int main() {
    string str;
    // cin >> str;
    str = "AaBaBaaBBBAabb";

    cout << "Maximum Occured Character in the String is " << maxOccuredChar(str) << endl;
    return 0;
}
