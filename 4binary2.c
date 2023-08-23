#include <stdio.h>

int binarySearch(int arr[], int low, int n, int target) {
    int high =n-1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80},target;
    
    int n = 40; 
   
   printf("enter you finding element : ");
   scanf("%d",&target);

    int result = binarySearch(arr, 0,n, target);

    if (result == -1){
            printf("Element %d is not present in the array.\n", target);
        }
    else{

            printf("Element %d is present at index %d.\n", target, result);
            printf("and element lenght is %d ",result+1);

        }

    return 0;
}
