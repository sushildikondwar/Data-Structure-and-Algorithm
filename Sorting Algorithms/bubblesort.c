
#include <stdio.h>

// Logic(Ascending): Swap till the largest element get to the last element, then reiterate from begining, provided, do not touch the last element

void swaptosort(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void increasingorder(int arr[], int n) {
    for (int i=n-1; i>=0; i--) {
        for (int j=0; j<i; j++) {
            if (arr[j] > arr[j+1]) {
                swaptosort(&arr[j], &arr[j+1]);
            }
        }
    }
    printf("\nAscending Order: \n");
    for (int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    return;
}

void decreasingorder(int arr[], int n) {
    for (int i=n-1; i>=0; i--) {
        for (int j=0; j<i; j++) {
            if (arr[j] < arr[j+1]) {
                swaptosort(&arr[j], &arr[j+1]);
            }
        }
    }
    printf("\nDescending Order: \n");
    for (int i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
    return;
}

int main() {
    printf("\n**BubbleSort**\n");
    int size;
    printf("\nEnter size of Input Array: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter %d Elements in Array: ",size);
    for (int i=0; i<size; i++) {
        scanf("%d",&arr[i]);
    }

    increasingorder(arr, size);
    decreasingorder(arr, size);
    
    printf("\n");
    return 0;
}