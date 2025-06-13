#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)

{
  // system("chcp 65001");

#define NUMBER 3

  int marks[NUMBER] = {31, 25, 88, 62};

  int x = marks[3];

  printf("%d\n", x);

  for (int i = 0; i < 4; i += 1)

    printf("%d ", marks[i]);

  return 0;
}
