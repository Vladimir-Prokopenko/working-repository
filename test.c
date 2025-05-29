#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)

{

  int number = 300;

  int *ptr;

  ptr = &number;

  *((char*) ptr + 1) = 100;

  printf("%d\n", number);

  return 0;
}
