#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int ar[6][6] = {0};
	int i, j, sum, max;
	sum = 0;
	max = ar[0][0];
	
	srand(time(NULL));
	
	for(i = 0; i < 6; i++)
	{
		for(j = 0; j < 6; j++)
		{
			ar[i][j] = rand()%99+1;
			if(ar[i][j] > max)
			{
				max = ar[i][j];
			}
			sum = sum + ar[i][j];
		}
	}
	
	i = 0;
	while(i < 6)
	{
		j = 0;
		while(j < 7)
		{
			printf("%3d", ar[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	printf("гу = %d\n", sum);
	printf("max = %d", max);
	
	return 0;
}
