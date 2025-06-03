#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)

{

  int number = 300;

  short *ptr;

  ptr = &number;

  *ptr = 100;

  printf("%d\n", number);

  return 0;
}
