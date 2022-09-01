#include<stdio.h>

int main()
{
	int i, j, n, m;
	
	for(i = 1; i <= 5; i++)
	{
		for(j = (5 - i); j >= 1; j--)
		{
			printf("  ");
		}
		for(n = 1; n <= i; n++)
		{
			printf("%d ", n);
		}
		for(m = (i - 1); m >= 1; m--)
		{
			printf("%d ", m);
		}
		printf("\n");
	}
	return 0;
}
