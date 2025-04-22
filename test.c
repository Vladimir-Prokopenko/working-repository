#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int x = 0;
    int y = x ? ++x : x++;
    printf("%d %d\n", x, y);

    return 0;
}
