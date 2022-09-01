#include<stdio.h>

int main()
{
	int i, j, n, m;
	
	for(i = 5; i >= 1; i--)
	{
		for(j = (5 - i); j >= 1; j--)
		{
			printf("  ");
		}
		for(n = i; n >= 1; n--)
		{
			printf("%d ", n);
		}
		for(m = 2; m <= i; m++)
		{
			printf("%d ", m);
		}
		printf("\n");
	}
	return 0;
}
