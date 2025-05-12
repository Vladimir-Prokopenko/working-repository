#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define SQUARE(x) (x * x)

int main()

{
    // system("chcp 65001");

    int a = 5;
    int result = SQUARE(a + 1);
    printf("%d ", result);

    return 0;
}
