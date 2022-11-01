#include<stdio.h>

int main()
{
	int a, b;
	
	a = 12;
	b = 20;
	printf("a = %d, b = %d \n", a, b);
	
	{
		int a, c;
		a = 30;
		c = 50;
		printf("a = %d, b = %d, c = %d\n", a, b, c);
		
		a = 90;
		b = 45;
		c = 75;
	}
	
	printf("a = %d, b = %d \n", a, b);
	
	return 0;
}
