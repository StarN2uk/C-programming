#include<stdio.h>

int main()
{
	int i, j, n, m, a, b, c, d;
	
	for(i = 1; i <= 5; i++)
	{
		for(j = (5 - i); j >= 1; j--)
		{
			printf("   ");
		}
		for(n = 1; n <= i; n++)
		{
			printf("%d  ", n);
		}
		for(m = (i - 1); m >= 1; m--)
		{
			printf("%d  ", m);
		}
		printf("\n");
	}
	for(a = 4; a >= 1; a--)
	{
		for(b = (5 - a); b >= 1; b--)
		{
			printf("   ");
		}
		for(c = 1; c <= a; c++)
		{
			printf("%d  ", c);
		}
		for(d = (a - 1); d >= 1; d--)
		{
			printf("%d  ", d);
		}
		printf("\n");
	}
	return 0;
}
