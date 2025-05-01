#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    // system("chcp 65001");

    switch (2)
    {
    case 0:
        printf("Odd\n");
        break;
    default:
        printf("Default\n");
        break;
    case 1:
        printf("Even\n");
        break;
    }

    return 0;
}
