
#include <stdio.h>

// Logic(Ascending): Iterate till last index and select the smallest element, then swap with the lowest index, then re-iterate, provided, this time, iterate leaving recent swapped index(from ++startingindex)
// Note: During each iteration, consider lowest index as lowest element index, and then compare with other indices

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void ascendingorder(int arr[], int n) {
    int smallest_index;
    int smallnum;
    for (int i=0; i<n-1; i++) {
        smallest_index = i;
        for (int j=i+1; j<n; j++) {
            if (arr[j]<arr[smallest_index]) {
                smallest_index = j;
            }
        }
        swap(&arr[i], &arr[smallest_index]);
    }
    for (int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    return;
}

void descendingorder(int arr[], int n) {
    int largest_index;
    int smallnum;
    for (int i=0; i<n-1; i++) {
        largest_index = i;
        for (int j=i+1; j<n; j++) {
            if (arr[j]>arr[largest_index]) {
                largest_index = j;
            }
        }
        swap(&arr[i], &arr[largest_index]);
    }
    for (int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    return;
}

int main() {
    printf("\n**SelectionSort**\n");
    int size;
    printf("\nEnter size of Input Array: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter %d Elements in Array: ", size);
    for (int i=0; i<size; i++) {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    ascendingorder(arr, size);
    printf("\n");
    descendingorder(arr, size);
    printf("\n");
    return 0;
}