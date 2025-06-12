#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)

{
  // system("chcp 65001");

  int num = 777;
  char *ptr = &num;
  for (int i = 0; i < 6; i += 1)
  {
    printf("%d ", *(ptr + i));
  }

  return 0;
}
