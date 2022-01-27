#include <iostream>
#include <climits>
using namespace std;

int main() {
    int max = INT_MIN;
    int arr[15] = {5,2,1,7,-2,3,-1,5,9,3,1,-1,2,-4,3};
    for (int i=0; i<15; i++) {
        if (arr[i]>max) {
            max=arr[i];
        }
    }
    cout<<"Maximum Element in Array: "<<max<<endl;
    return 0;
}
