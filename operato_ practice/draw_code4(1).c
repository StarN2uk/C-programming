#include<stdio.h>

int main()
{
	int a, b, c;
	
	a = 45;
	b = 5;
	c = 1;
	a += c;
	a += c;
	a += c;
	a -= b;
	a -= b;
	a -= c;
	a -= c;
	printf("a = %d", a);
	return 0;
}
