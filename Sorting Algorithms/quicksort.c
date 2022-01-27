
//  Logic: If the value is greater than pivot, then we have to move it somewhere next to pivot, and if its lesser than pivot, then we have to move it somewhere before the pivot. The original pivot will be decided at the end, when j will be less than i, then we are going to swap the temporary pivot with the value at jth position. Then the jth position will be our pivot element, which will not need any further sorting. Then repeat the process both on the left and the right side.
//  Analysis: TimeComplexity: AVG(nlogn) WORST(n^2)

#include <stdio.h>

void swap(int *i, int *j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}

int partition(int arr[], int l, int r) {
    int pivot = arr[l];
    int i = l;
    int j = r;
    while (i<j) {
        while (arr[i]<=pivot) {
            i++;
        }
        while (arr[j]>pivot) {
            j--;
        }
        if (i<j) {
            swap(&arr[i], &arr[j]);            
        }
    }
    swap(&arr[l], &arr[j]);
    return j;
}

void quicksort(int arr[], int l, int r) {
    if (l<r) {
        int pivot = partition(arr, l, r);
        quicksort(arr, l, pivot-1);
        quicksort(arr, pivot+1, r);
    }
}

int main() {
    printf("\n**QuickSort**\n");
    int size;
    printf("\nEnter size of Input Array: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter %d Elements in Array: ", size);
    for (int i=0; i<size; i++) {
        scanf("%d",&arr[i]);
    }
    
    quicksort(arr, 0, size-1);

    printf("\n");

    printf("Sorted Array: ");
    for (int i=0; i<size; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}