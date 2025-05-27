#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int main(void)

{
  int marks[13];
  marks[2] = 4;
  marks[0] = 2 * 3;
  marks[12] = 7 - 2;
  marks[13] = 1;
  int x = marks[2];
  printf("x = %d\n", x);
  int y = marks[13];
  printf("y = %d\n", y);

  return 0;
}
