#include<stdio.h>

int main()
{
	int i, j;
	
	for(j = 0; j <= 4; j++)
	{
		for(i = 1; i <= (5 - j); i++)
		{
			printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}
