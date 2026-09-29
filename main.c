#include <stdio.h>

int main(void)
{
    int x, y, res;

    printf("input two intergers:");
    scanf("%d %d", &x, &y);


    res = x + y;
    printf("%i + %i = %i\n", x, y, res);

    res = x - y;
    printf("%i - %i = %i\n", x, y, res);

    res = x * y;
    printf("%i * %i = %i\n", x, y, res);

    res = x / y;
    printf("%i / %i = %i\n", x, y, res);

    res = x % y;
    printf("%i %% %i = %i\n", x, y, res);

}