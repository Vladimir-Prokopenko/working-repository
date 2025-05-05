#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    system("chcp 65001");

    int i;
    for (i = 0; i < 5; ++i)
        if (i == 3)
            break; 0;
    printf("%d ", i);

    return 0;
}
