// binary serch using recursive function
#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target)
{
    if (low <= high)
    {
        int mid = (high + low) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            return binarySearch(arr, low, mid - 1, target);
        }
        else
        {
            return binarySearch(arr, mid + 1, high, target);
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15}, target;
    int n = 8;

    printf("Enter your search element : ");
    scanf("%d", &target);

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
    {
        printf("Element found at index %d and its lenght is %d\n", result, result + 1);
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}
