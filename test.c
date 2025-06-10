#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)

{

  short number = 300;

  void *ptr_sh_num = &number;

  *ptr_sh_num = 2;
  
  printf("%d\n", number);

  return 0;
}
