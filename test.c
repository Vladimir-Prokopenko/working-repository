#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)

{

  short number = 300;

  void *ptr_sh_num = &number;

  *(int *)ptr_sh_num = 222;

  char *p = &number;

  printf("%d\n", *(p + 0));

  return 0;
}
