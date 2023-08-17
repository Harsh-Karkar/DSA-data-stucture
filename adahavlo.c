#include <stdio.h>

int main() {
    int n[20];
    printf("Enter  a number : ");
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", &n[i]);
    }

    int temp = n[0]; 
    for (int i = 0; i < 4; i++) 
    {
        n[i] = n[i + 1]; 
    }
    n[4] = temp; 

    printf("Output: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", n[i]);
    }
    
    return 0;
}