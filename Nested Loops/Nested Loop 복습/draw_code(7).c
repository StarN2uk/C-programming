#include<stdio.h>

int main()
{
	int i, j, n, m;
	
	for(i = 5; i >= 1; i--)
	{
		for(j = (i - 1); j >= 1; j--)
		{
			printf("  ");
		}
		for(n = i; n <= 5; n++)
		{
			printf("%d ", n);
		}
		printf("\n");
	}
	return 0;
}
