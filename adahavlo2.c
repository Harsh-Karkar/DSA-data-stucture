#include <stdio.h>

void rotate_array(int array[], int n, int d) {
  int temp;
  for (int i = 0; i < d; i++) {
    temp = array[0];
    for (int j = 0; j < n-1; j++) {
      array[j] = array[j+1];
    }
    array[n-1] = temp;
  }
}

int main() {
  int array[100];
  int n, d;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  printf("Enter the number of positions to rotate: ");
  scanf("%d", &d);

  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  rotate_array(array, n, d);

  printf("The rotated array is: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }

  return 0;
}