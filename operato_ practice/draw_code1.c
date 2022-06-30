#include<stdio.h>

int main()
{
	int a, b;
	
	a = 10;
	b = a++;
	printf("a = %d b = %d\n", a, b);
	b = ++a;
	printf("a = %d b = %d\n", a, b);
	
	a = 20;
	b = a--;
	printf("a = %d b = %d\n", a, b);
	b = --a;
	printf("a = %d b = %d\n", a, b);
	return 0;
}
