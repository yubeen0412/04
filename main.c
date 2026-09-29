#include <stdio.h>

int main(void)
{
    int time;
    int h, m, s;

    printf("input seconds : ");
    scanf("%d", &time);

    h = time / 3600;
    m = (time % 3600) / 60;
    s = time % 60;

    printf("the time for %d is %d : %d : %d\n",
           time, h, m, s);

    return 0;
}