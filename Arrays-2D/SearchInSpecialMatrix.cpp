/*  Special Matrix(m,n) Properties:
    •   Integers in each row are sorted in ascending from left to right.
    •   Integers in each column are sorted in ascending from top to bottom. 
Example: 
        2 | 5 | 8 | 12
        3 | 6 | 9 | 16
        18| 21| 23| 26  */

#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
	int row = matrix.size(), col = matrix[0].size();
	int i=0, j=col-1;
	
	while (i<row && j>=0) {
		int element = matrix[i][j];
		if (element == target)
			return true;
		else if (element > target)
			j--;
		else
			i++;
	}
	return false;
}
/*Logic: 
    Strategy was to find the pattern and decrease the search space, and then remaining process was just like the binary search  */

int main() {
	vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22}};
	searchMatrix(matrix, 7)? cout << "Item found!": cout << "Item not found!";
	return 0;
}