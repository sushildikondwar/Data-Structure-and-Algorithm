#include <iostream>
using namespace std;

void threePointerMagic(int arr[], int size)
{
    int i = 0, j = 0, k = size - 1;
    while (j <= k)
    {
        if (arr[j] == 0)
        {
            swap(arr[j], arr[i]);
            j++;
            i++;
        }
        else if (arr[j] == 1)
        {
            j++;
        }
        else
        {
            swap(arr[j], arr[k]);
            k--;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 0, 1, 0, 2, 1, 2};
    int arrsize = sizeof(arr) / sizeof(arr[0]);
    cout << "Original: ";
    for (int i = 0; i < arrsize; i++)
    {
        cout << arr[i] << " ";
    }

    threePointerMagic(arr, arrsize);

    cout << "\nSorted:   ";
    for (int i = 0; i < arrsize; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}