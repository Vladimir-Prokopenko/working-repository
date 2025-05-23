#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
  // system("chcp 65001");

  int d = 7777;

  short *gpt = &d;

  // printf("%d\n", sizeof(*gpt));
  printf("%d\n", *(gpt + 1));

  return 0;
}
