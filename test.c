#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)

{

  int number = 300;

  int *ptr_num = &number;

  ptr_num = 777;
  
  printf("%d\n", ptr_num + 1);

  return 0;
}
