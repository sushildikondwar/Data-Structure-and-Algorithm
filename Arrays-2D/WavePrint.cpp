//  Objective is to print from top to bottom, then bottom to top, then top to bottom, then ........

#include <iostream>
#include <vector>
using namespace std;

vector<int> waveConverter(int arr[][3], int row, int col) {
    vector<int> waveContainer;
    for (int j=0; j<col; j++) {
        if (j%2 !=0 ) { //  if odd col index, then bottom to top
            for (int i=row-1; i>=0; i--) {
                waveContainer.push_back(arr[i][j]);
            }
        }
        else {  //  if even col index, them top to bottom
            for (int i=0; i<row; i++) {
                waveContainer.push_back(arr[i][j]);
            }
        }
    }

    return waveContainer;
}

void printMatrix(int arr[][3], int row, int col) {
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int row=3, col=3;
    int arr[][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    cout << "Original Matrix: \n";
    printMatrix(arr, row, col);
    
    vector<int> waveArr = waveConverter(arr, row, col); //  converted waved matrix arr

    int n=0;    //  vector tracer

    for (int j=0; j<col; j++)   //  rearranging the matrix (row<->col)
        for (int i=0; i<row; i++)
            arr[i][j] = waveArr[n++];

    cout << "\nWave Matrix: \n";
    printMatrix(arr, row, col);

    return 0;
}