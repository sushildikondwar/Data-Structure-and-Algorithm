
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> transposeMatrix(vector<vector<int>> matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<int>> ans(n, vector<int>(m, 0)); //  new matrix with dimension (n x m) as it'll be the transpose of the input matrix

    for (int j = 0; j < n; j++)
        for (int i = 0; i < m; i++)
            ans[j][i] = matrix[i][j];
    return ans;
}

void printMatrix(vector<vector<int>> matrix) {
    int row = matrix.size();
    int col = matrix[0].size();

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
            cout << matrix[i][j] << " | ";
        cout << endl;
    }
} /* Time Complexity: O(n^2) */

int main() {
    vector<vector<int>> matrix = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};  //  (3x4)
    cout << "_Original_ \n";
    printMatrix(matrix);

    cout << "_Transposed_ \n";
    printMatrix ( transposeMatrix(matrix) );

    return 0;
}

/*transpose algo. if *Input is square matrix and condition is to transpose IN-PLACE*

void transposeMatrix(vector<vector<int>> &matrix) {
    int row = matrix.size();
    int col = matrix[0].size();

    for (int i = 0; i < row; i++) {
        for (int j = i; j < col - 1; j++) { //  'j' should be col-1, orelse Segmentation fault will get encountered
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
} // Time Complexity: O(row * (col-1-row)) => O(n^2)    */
