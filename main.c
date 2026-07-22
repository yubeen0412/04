#include <stdio.h>
 
int main ()
{
	int x, a, b, c, d; 
	printf("input the second :");
	scanf("%i", &x);
	a=x/3600;
	b=x%3600;
	c=b/60;
	d=b%60;
	printf("the time %i is %i : %i :%i",x, a, c, d);
}
