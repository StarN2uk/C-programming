#include<stdio.h>

int main()
{
	int i, j;
	
	for(j = 0; j <= 4; j++)
	{
		for(i = (5 - j); i >= 1; i--)
		{
			printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}
