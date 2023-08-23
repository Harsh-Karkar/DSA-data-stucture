#include<stdio.h>
#include<stdlib.h>
#define n 10
int a[n],i,j;

int bubblesort(int arry[], int ele)
{
    int temp;
    for ( i = 0; i < ele   ; i++)
    {
        for(j =0 ; j< ele - 1; j++ )
        {
                if(arry[j] > arry[j + 1])
                {
                    temp = arry[j];
                    arry[j] = arry[j + 1];
                    arry[j + 1] = temp;
                }
        }
    }
    
}


int main()
{
    
    for(i=0; i<n; i++)
    {
        a[i] = rand()%50 + 1;
    }


    printf("\noriganal array element is : ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    bubblesort(a ,n);

    printf("\n\n sort array element is : ");
    for(i = 0; i< n ; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}