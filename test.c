#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)

{

  short number = 777;

  char *ptr_num = &number;
  
  printf("%d%d\n", *ptr_num, *(ptr_num + 1));

  return 0;
}
