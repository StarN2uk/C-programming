#include<stdio.h>

int main()
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		if(i % 2 == 0)
		{
			printf("-2 ");
		}
		else
		{
			printf("2 ");
		}
	}
	return 0;
}
