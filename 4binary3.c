#include<stdio.h>

int binary(int ary[],int low , int n , int target)
{
    int high = n-1;
    while(high >= low)
    {
        int mid = low + (high -low)/2;
        if(ary[mid] == target)
        {
            return mid;
        }
        else if(ary[mid]< target)
        {
            return mid - 1;
        }
        else
        {
            return mid + 1;
        }
    }
    return -1;
}

int main()
{
    int ary[] = {10,9,8,7,6,5,4,3,2,1},target;
    int n = 10;

    printf("enter your find element in array : ");
    scanf("%d",&target);

    int result = binary(ary , 0 , n , target);

    if(result == -1)
    {
        printf("Element %d is not found .",target);
    }
    else{
        printf("\nElement %d is present %d index",target,result);
    }
}