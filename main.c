#include <stdio.h>

int main(void)
{
    int x, y, z;
    printf("input the second");
    scanf("%d", &x);

    y = x/60;
    z = x%60;

    printf("the time is %d : %d", y, z);
    
}