#include <stdio.h>
 
int main () { 
	int x, y; 
	printf("input two integers :");
	scanf("%i %i", &x, &y);
	printf("+ result is %i\n", x + y);
	printf("- result is %i\n", x - y);
	printf("* result is %i\n", x * y);
	printf("/ result is %i\n", x / y);
	printf("%% result is %i\n", x % y);	
	}