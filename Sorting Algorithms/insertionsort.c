
#include <stdio.h>
//  Logic(Ascending): Iterate over an array and find the element violating the ascending order rule, then pick that element and keep swapping with the previous element, till that element not satisfies the sorted rule.

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void ascendingsort(int arr[], int n) {
    for (int i=1; i<n; i++) {
        if (arr[i]<arr[i-1]) {
            for (int j=i; j>=1; j--) {
                if (arr[j]<arr[j-1]) {
                    swap(&arr[j], &arr[j-1]);
                }
                else {
                    break;
                }
            }
        }
    }
    printf("\nAscending Order: \n");
    for (int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return;
}

void descendingsort(int arr[], int n) {
    for (int i=1; i<n; i++) {
        if (arr[i]>arr[i-1]) {
            for (int j=i; j>=1; j--) {
                if (arr[j]>arr[j-1]) {
                    swap(&arr[j], &arr[j-1]);
                }
                else {
                    break;
                }
            }
        }
    }
    printf("\nDescending Order: \n");
    for (int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return;
}

int main() {
    printf("\n**InsertionSort**\n");
    int size;
    printf("\nEnter size of Input Array: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter %d Elements in Array: ", size);
    for (int i=0; i<size; i++) {
        scanf("%d",&arr[i]);
    }
    ascendingsort(arr, size);
    descendingsort(arr, size);
    return 0;
}