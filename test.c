#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)

{

  short number = 777;

  char *ptr_num = &number;

  ptr_num = 6422301;

  printf("%d\n", *ptr_num);

  return 0;
}
