#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
    int a = 300;

    int *const ptr = &a;

//   ptr = 222;

  printf("%d\n", ptr);

  return 0;
}
