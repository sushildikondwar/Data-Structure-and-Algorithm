
#include <iostream>
using namespace std;

// recursive
int binarySearch(int arr[], int l, int r, int target)
{
    int mid;
    if (l <= r) // EDGE CONDITION, without this, segmentation error will be there
    {
        mid = l+(r-l)/2;    //  LOGICAL CASE, we can also consider (l+r)/2, but, if the testcase consists the values of l and r in order of 2^31, then l+r will create an integer out of its range, error will get encountered.
        if (arr[mid] == target)
            return mid;
        if (target < arr[mid])
            return binarySearch(arr, l, mid - 1, target);
        else
            return binarySearch(arr, mid + 1, r, target);
    }
    return -1;
}

// iterative
// int binarySearch(int arr[], int l, int r, int target) {
//     while (l <= r) {
//         int mid = l+(r-l)/2;
//         if (arr[mid] == target)
//             return mid;
//         if (target < arr[mid])
//             r = mid-1;
//         else
//             l = mid+1;
//     }
//     return -1;
// }

int main()
{
    int arr[] = {1, 2, 7, 12, 17, 19, 31, 34, 35, 39};
    int key = 3;
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    cout << "Target found at " << binarySearch(arr, 0, arrSize - 1, key) << endl;
    return 0;
}
