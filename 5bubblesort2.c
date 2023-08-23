#include <stdio.h>
#include <stdlib.h>
#define n 10

int a[n];


void bubbleSort(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int i;

   
    for (i = 0; i < n; i++) {
        a[i] = rand() % 50 + 1;
    }

    printf("Original array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    
    bubbleSort(a, n);

    printf("\nSorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}