#include <stdio.h>
 
int main () { 
	int y, a; 
	printf("input the year :");
	scanf("%d", &y);
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
{
    a=1;
}
else
{
    a=0;
}
	printf("is the year %d the leap year? %d", y, a);
	}