#include<stdio.h>

int main()
{
	int i, sum;
	sum = 0;
	
	for (i = 0; i < 23; i++)
	{
		if(i % 2 == 0)
		{
			printf("%d", (i+1) * (i+1));
			sum = sum + i;
		}
		else
		{
			printf("-%d+", (i+1) * (i+1));
			sum = sum - i;
		}
	}
	printf("\t%d", sum);
	return 0;
}
