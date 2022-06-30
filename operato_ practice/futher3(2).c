#include<stdio.h>

int main()
{
	int a, b, c, d;
	
	a = 50;
	b = 10;
	c = 2;
	d = 5;
	a *= b;
	a += b;
	a *= b;
	a -= d;
	a -= d;
	a /= c;
	printf("%d", a);
	return 0;
}
