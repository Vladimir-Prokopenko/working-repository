#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)

{

  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = &arr[2];
  printf("%d", ptr[1]);

  return 0;
}
