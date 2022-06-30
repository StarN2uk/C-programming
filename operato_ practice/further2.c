#include<stdio.h>

int main()
{
	int a, b, c, d;
	
	a = 7;
	b = 5;
	c = 3;
	d = 0;
	printf("%d",(a*1000+b*100+d*10+c)- (c*1000+b*100+d*10+a));
	return 0;
}
