#include <stdio.h>

int main(void)
{
    int year;

    printf("input the year : ");
    scanf("%d", &year);

    printf("%i\n", (year % 4 == 0 && year % 100 != 0) || year % 400 == 0);

    return 0;
}