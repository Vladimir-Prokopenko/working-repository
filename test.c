#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
    char arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr[1];
    printf("%d\n", sizeof(*ptr));

    return 0;
}
