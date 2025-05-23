#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
  // system("chcp 65001");

  short d = 777;

  int *gpt = &d;
  
  printf("%d\n", sizeof(d));

  return 0;
}
