#include <iostream>
#include <vector>
using namespace std;

int pivotFinder(vector<int> arr, int s, int e, int root) {
    if (s >= e)
        return s;
    if (arr[s] < root)
        return s;
    int mid = (e+s)/2;
    if (arr[mid] > root)
        return pivotFinder(arr, mid+1, e, root);
    else
        return pivotFinder(arr, s, mid, root);
}

void printer(vector<int> arr) {
    for (int item: arr) {
        cout << item << " ";
    }
}

int main() {
    vector<int> arr = {11,7,8,9};
    cout << "Pivot Location: " << pivotFinder(arr, 0, arr.size(), arr[0]);
    return 0;
}