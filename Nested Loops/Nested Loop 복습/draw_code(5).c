#include<stdio.h>

int main()
{
	int i, j, n;
	
	for(i = 1; i <= 5; i++)
	{
		for(j = (5 - i); j >= 1; j--)
		{
			printf("  ");
		}
		for(n = i; n >= 1; n--)
		{
			printf("%d ", n);
		}
		printf("\n");
	}
	return 0;
}
