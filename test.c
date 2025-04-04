#include <stdio.h>
#include <stdbool.h>

int main()

{
    // Чи ідентичні ці записи i += 1 та i++
    int i = 1;

    // printf("%d\t%d\n", i += 1, i++);
    // printf("%d\t%d\n", i += 1, i += 1);
    // printf("%d\t%d\n", i++, i++);
    printf("%d\t%d\n", i++, i += 1);

    return 0;
}
