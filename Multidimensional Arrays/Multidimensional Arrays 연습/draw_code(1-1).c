#include<stdio.h>

int main()
{
	int ar[6][5] = {23, 22, 27, 21, 24, 21, 22, 25, 24, 23, 20, 23, 22, 21, 24, 25, 26, 24, 27, 28, 26, 24, 28, 29, 26, 27, 28, 29, 26, 27};
	int i, j;
	
	for(i = 0; i < 6; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("%d", ar[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	return 0;
}
