#include<stdio.h>

int main()
{
	int a, b, c, d;
	
	a = 100;
	b = 10;
	c = 2;
	d = 5;
	a += b;
	a += b;
	a += b;
	a /= c;
	a /= c;
	a -= d;
	a -= d;
	printf("%d", a);
	return 0;
}
