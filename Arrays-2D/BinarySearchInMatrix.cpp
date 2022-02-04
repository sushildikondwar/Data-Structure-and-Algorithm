
#include <iostream>
#include <vector>
using namespace std;

bool binarySearchInMatrix (vector<vector<int>> matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row*col - 1;

    while (start <= end) {
        int mid = start + (end-start)/2;    //  mid position when interpreted as a linear list
        int midElement = matrix[mid/col][mid%col];  //  locating the mid position element at matrix

    //  Binary Search Logic
        if (midElement == target)
            return true;
        else if (midElement < target)
            start = mid+1;
        else
            end = mid-1;
    }

    return false;
}

int main() {

    vector<vector<int>> matrix = {{1,3,5,7}, {10,11,16,20}, {23,30,34,60}};
    cout << binarySearchInMatrix(matrix, 3);

    return 0;
}