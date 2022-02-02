
#include <iostream>
#include <vector>
using namespace std;

void spiralMatrix(vector<vector<int>>& arr) {

    int rows = arr.size();
    int columns = arr[0].size();

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = rows-1;
    int endingCol = columns-1;

    int count=0, total = rows*columns;  // precautionary steps

    while (count < total) { //  terminates when all elements got traversed

        for (int index=startingCol; count < total && index<=endingCol; index++) {   //  checks all time, if traversed fully
            cout << arr[startingRow][index] << " ";
            count++;
        }
        startingRow++;

        for (int index=startingRow; count < total && index<=endingRow; index++) {   //  checks all time, if traversed fully
            cout << arr[index][endingCol] << " ";
            count++;
        }
        endingCol--;

        for (int index=endingCol; count < total && index>=startingCol; index--) {   //  checks all time, if traversed fully
            cout << arr[endingRow][index] << " ";
            count++;
        }
        endingRow--;

        for (int index=endingRow; count < total && index>=startingRow; index--) {   //  checks all time, if traversed fully
            cout << arr[index][startingCol] << " ";
            count++;
        }
        startingCol++;

    }
}

int main() {
    
    vector<vector <int>> arr = {{1,2,3},{4,5,6},{7,8,9}};

    spiralMatrix(arr);

    return 0;
}