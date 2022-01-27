#include <iostream>
#include <climits>
using namespace std;

int main() {
    int min = INT_MAX;
    int arr[] = {5,2,1,7,-2,3,-1,5,9,3,1,-1,2,-4,3};
    for (int i=0; i<15; i++) {
        if (arr[i]<min) {
            min = arr[i];
        }
    }
    cout<<"Minimum Element in Array: "<<min<<endl;
    return 0;
}