#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int ar[6][6] = {0};
	int i, j, smallest;
	smallest = 99;
	
	srand(time(NULL));
	
	for(i = 0; i < 6; i++)
	{
		for(j = 0; j < 6; j++)
		{
			ar[i][j] = rand()%99+1;
			if(smallest > ar[i][j])
			{
				smallest = ar[i][j];
			}
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
	printf("가장 작은 것 = %d", smallest);
	
	return 0;
}
