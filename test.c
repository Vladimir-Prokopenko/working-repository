#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()

{

    // Яке значення отримає змінна b після виконання цього коду ?
    int a = 0;
    int b = !a + a;
    a = a + b;
    printf("%d", a);

    return 0;
}
