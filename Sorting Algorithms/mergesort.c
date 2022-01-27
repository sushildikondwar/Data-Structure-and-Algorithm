
#include <stdio.h>

void merging(int arr[], int indexstart, int mid, int indexend) {
    int a=mid-indexstart+1;
    int b=indexend-mid;
    int temparr1[a];
    int temparr2[b];
    for (int i = 0; i<a; i++) {
        temparr1[i] = arr[indexstart+i];
    }
    for (int i = 0; i<b; i++) {
        temparr2[i] = arr[mid+1+i];
    }
    int i=0, j=0, k=indexstart;

    while (i<a && j<b) {
        if (temparr1[i]<=temparr2[j]) {
            arr[k] = temparr1[i];
            i++;
        }
        else {
            arr[k] = temparr2[j];
            j++;
        }
        k++;
    }
    while(i<a) {
            arr[k] = temparr1[i];
            k++;
            i++;
        }
    while(j<b) {
            arr[k] = temparr2[j];
            k++;
            j++;
        }
}

void mergeSort(int arr[], int indexstart, int indexend) {
    if (indexend>indexstart) {
        int mid = (indexstart+indexend)/2;
        mergeSort(arr, indexstart, mid);
        mergeSort(arr, mid+1, indexend);
        merging(arr, indexstart, mid, indexend);
    }
}

int main() {
    printf("\n**MergeSort**\n");
    int size;
    printf("\nEnter size of Input Array: ");
    scanf("%d",&size);
    int arr[size];
    int temparr[size];
    printf("\nEnter %d Elements in Array: ", size);
    for (int i=0; i<size; i++) {
        scanf("%d",&arr[i]);
    }
    
    mergeSort(arr, 0, size-1);

    printf("\n");

    printf("Sorted Array: ");
    for (int i=0; i<size; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
