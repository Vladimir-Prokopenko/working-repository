#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int i = 3;

    printf("%d", (++i + i++ * 2));
}
