
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> tripletSum(int arr[], int size, int sum) {
    vector<int> ans;
    int i=0, j, k;
    for (i=0; i<size-2; i++) {
        for (j=i+1; j<size-1; j++) {
            for (k=j+1; k<size; k++) {
                if (arr[i]+arr[j]+arr[k] == sum) {
                    ans.push_back(arr[i]);
                    ans.push_back(arr[j]);
                    ans.push_back(arr[k]);
                    return ans;
                }
            }
        }
    }
    ans.push_back(-1);
    return ans;
}

int main() {
    int arr[] = {1, 1, 2, 2, 1, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 4;
    vector<int> getvector = tripletSum(arr, size, target);
    for (int i=0; i<getvector.size(); i++)
        cout << getvector[i] << " ";
    return 0;
}