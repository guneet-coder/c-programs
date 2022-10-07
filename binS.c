// Binary Search Using C

#include <stdio.h>

int binSea(int arr[], int i, int x, int y) {

  while (x<= y) {
    int m= x+ (y- x) / 2;

    if (arr[m] == i)
      return m;

    if (arr[m] < i)
      x= m+ 1;

    else
      y= m- 1;
  }

  return -1;
}

int main(void) {
  int arr[] = {12, 14, 17, 19, 20, 21, 22};
  int n = sizeof(arr) / sizeof(arr[0]);
  int i = 22;
  int result = binSea(arr, i, 0, n - 1);
  if (result == -1)
    printf("The Given Element Is Not Found In The Given Sorted List");
  else
    printf("The Given Element 22 Is Found At The Index Of %d", result);
  return 0;
}
