#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int ar[6][6] = {0};
	int i, j, k;
	
	srand(time(NULL));
	
	for(i = 0; i < 6; i++)
	{
		for(j = 0; j < 6; j++)
		{
			ar[i][j] = rand()%99+1;
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
	
	scanf("%d", &k);
	
	for(i = 0; i < 6; i++)
	{
		for(j = 0; j < 6; j++)
		{
			if(ar[i][j] == k)
			{
				printf("있다\t");
			}
			else
			{
				printf("응, 없어\t");
			}
		}
	}
	
	return 0;
}
