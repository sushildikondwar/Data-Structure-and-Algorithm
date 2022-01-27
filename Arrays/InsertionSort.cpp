// INSERTION SORT
#include <iostream>
using namespace std;

// Think in terms of sorting the cards in hands, we just arrange the card by comparing it with the previous elements, we keep checking in reverse order and stops at a particular place
// TimeComplexity, Big O = O(n^2)
// BestCase: O(n), WorstCase: O(n^2)
void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)  //  Here, no swapping, just moving element to the single right
                arr[j + 1] = arr[j];
            else
                break;
            j--;
        }
        arr[j + 1] = temp;
    }
// BELOW IS THE CASE SHOWING TLE FOR SOME TESTCASES
    // for (int i=1; i<size; i++) {
    //     int index = i;
    //     while (index > 0) {
    //         if (arr[index] <= arr[index-1]) {
                // int temp = arr[index];  //  Swapping everytime might encounter TLE
    //             arr[index] = arr[index-1];
    //             arr[index-1] = temp;
    //         }
    //         else {
    //             break;
    //         }
    //         index--;
    //     }
    // }
}

int main()
{
    int arr[] = {5, 2, 3, 6, 4, 1, 5, 2, 8, 7, 1, 0, 3, 6, 5, 9, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    insertionSort(arr, size);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}