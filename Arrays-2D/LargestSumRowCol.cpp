
#include <iostream>
#include <limits.h>
using namespace std;

int largestSumRow(int arr[][4], int row, int col) {
    int maxSum = INT_MIN;
    int maxSumRowIndex = -1;
    for (int i=0; i<row; i++) {
        int sum=0;
        for (int j=0; j<col; j++) {
            sum+=arr[i][j];
        }
        if (sum > maxSum) {
            maxSum = sum;
            maxSumRowIndex = i;
        }
    }
    return maxSumRowIndex;        
}

int largestSumCol(int arr[][4], int row, int col) {
    int maxSum = INT_MIN;
    int maxSumColIndex = -1;
    for (int j=0; j<col; j++) {
        int sum=0;
        for (int i=0; i<row; i++) {
            sum+=arr[i][j];
        }
        if (sum > maxSum) {
            maxSum = sum;
            maxSumColIndex = j;
        }
    }
    return maxSumColIndex;        
}

void printMatrix(int arr[][4], int row, int col) {
    cout << "Matrix[" << row <<"][" << col << "]: " << endl;
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int row=3, column=4;
    int arr[][4] = {{2,5,4,1}, {5,2,6,8}, {7,3,1,6}};

    printMatrix(arr, row, column);

    cout << "\nRow with largest sum is " << largestSumRow(arr, row, column);

    cout << "\nColumn with largest sum is " << largestSumCol(arr, row, column);

    return 0;
}