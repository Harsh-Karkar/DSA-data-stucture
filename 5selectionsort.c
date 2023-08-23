#include<stdio.h>
#include<stdlib.h>
#define n 10

int a[n],i,j,temp;

int selectionsort()
{
    for(i=0; i< n ; i++)
    {
        for(j = i+1; j< n ; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    for ( i = 0; i < n; i++)
    {
        a[i] = rand()%55 +1;
    }

    printf("\n Original array alement is : ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }


    selectionsort();

    printf("\n\n Sorted array element is : ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
}
