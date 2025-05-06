#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define VALUE 5

int main()

{
    #if VALUE
        printf("High\n");
    #else
        printf("Low\n");
    #endif

    return 0;
}
