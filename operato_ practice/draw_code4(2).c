#include<stdio.h>

int main()
{
	int a, b, c;
	
	a = 47;
	b = 5;
	c = 1;
	a += b;
	a += c;
	a += b;
	a -= c;
	a -= c;
	a -= b;
	printf("a = %d", a);
	return 0;
}
