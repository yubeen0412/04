#include <stdio.h>
 
int main () { 
	int x, a, b; 
	printf("input the second :");
	scanf("%i", &x);
	a=x/60;
	b=x%60;
	printf("the time is %i : %i", a, b);
	}