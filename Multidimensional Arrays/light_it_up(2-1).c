#include<stdio.h>

int main()
{
	int i, j, sum;
	sum = 0;
	int ar[6][9] = {{ 0, 0, 0, 1, 0, 0, 0, 0, 0},
				   { 0, 0, 0, 0, 0, 0, 0, 2, 0},
				   { 0, 0, 0, 0, 1, 0, 0, 0, 0},
				   { 0, 2, 0, 1, 0, 0, 0, 0, 0},
				   { 0, 0, 0, 1, 0, 0, 0, 0, 0},
				   { 0, 0, 1, 0, 0, 0, 1, 0, 0},
				   };
	for(i = 0; i <= 5; i++)
	{
		for(j = 0; j <= 8; j++)
		{
			if(ar[i][j] == 1)
			{
				sum++;
			}
		}
	}
	printf("%d", sum);
	return 0;
}
