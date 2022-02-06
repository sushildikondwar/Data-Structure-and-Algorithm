//  Rotate the matrix n*n by +90degrees, (IN-PLACE)
/*
    | 1 | 2 | 3 |  (90°)   | 7 | 4 | 1 |
    | 4 | 5 | 6 |  ===>>   | 8 | 5 | 2 |
    | 7 | 8 | 9 |          | 9 | 6 | 3 |
*/

// step 1: Matrix Transpose
// step 2: Swap Columns

#include <iostream>
#include <vector>
using namespace std;

void transposeMatrix(vector<vector<int>> &matrix) {
    int n = matrix.size();
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            swap (matrix[i][j], matrix[j][i]);
        }
    }
}

void swapColumns(vector<vector<int>> &matrix) {
    int n = matrix.size();
    for (int i=0; i<n; i++) {
        for (int j=0; j<n/2; j++) {
            swap (matrix[i][j], matrix[i][n-j-1]);
        }
    }
}

void printMatrix(vector<vector<int>> &matrix) {
    int n = matrix.size();
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << " | ";
            cout << matrix[i][j] << " | ";
        }
        cout << "\n";
    }
}

int main() {

    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    transposeMatrix(matrix);
    swapColumns(matrix);
    printMatrix(matrix);

    return 0;
}