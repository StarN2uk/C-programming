#include<stdio.h>

int main()
{
	int a = 12;
	int b = 3;
	
	a -= b++;
	printf("a = %d b = %d\n", a, b);
	a /= --b;
	printf("a = %d b = %d\n", a, b);
	a += b++;
	printf("a = %d b = %d\n", a, b);
	a -= ++b;
	printf("a = %d b = %d\n", a, b);
	a += --b;
	printf("a = %d b = %d\n", a, b);
	return 0;
}
