#include <stdio.h>

int main() 
{
    int n[20],numElements;
    printf("Enter the number of elements : ");
    scanf("%d", &numElements);

   
    printf("Enter %d numbers: ", numElements);
    for (int i = 0; i < numElements; i++) {
        scanf("%d", &n[i]);
    }

    int temp = n[0];
    for (int i = 0; i < numElements - 1; i++) {
        n[i] = n[i + 1];
    }
    n[numElements - 1] = temp;

    printf("Output: ");
    for (int i = 0; i < numElements; i++) {
        printf("%d ", n[i]);
    }
    
    return 0;
}
