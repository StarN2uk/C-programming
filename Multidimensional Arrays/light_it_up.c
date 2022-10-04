#include<stdio.h>

int main()
{
	int ar1[3][4] = {0};
	int ar2[ ][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int ar3[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	int i, j, k, l, m, n;
	
	for(i = 0; i <= 2; i++)
	{
		for(j = 0; j <= 3; j++)
		{
			printf("%d ", ar1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	k = 0;
	l = 0;
	while(k < 3)
	{
		while(l < 4)
		{
			printf("%d ", ar2[k][l]);
			l++;
		}
		l = 0;
		printf("\n");
		k++;
	}
	printf("\n");
	m = 0;
	n = 0;
	do
	{
		do
		{
			printf("%d ", ar3[m][n]);
			n++;
		}while(n < 4);
		n = 0;
		printf("\n");
		m++;
	}while(m < 3);
	return 0;
}
