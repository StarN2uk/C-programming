#include<stdio.h>

int main()
{
	int ar[5][5] = {0, 2, 4, 6 ,8, 19, 0, 20, 12, 14, 17, 15, 0, 16, 18, 13, 11, 9, 0, 20, 7, 5, 3, 1, 0};
	int i, j;
	
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("%d\t", ar[i][j]);
		}
		printf("%d\n");
	}
	return 0;
}
