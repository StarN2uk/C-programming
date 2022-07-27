#include<stdio.h>

int main()
{
	int i;
	
	for(i = 0; i < 10; i++)
	{
		if(i % 3 == 0)
		{
			printf("0");
		}
		else if(i % 3 == 1)
		{
			printf("1");
		}
		else
		{
			printf("2");
		}
	}
	return 0;
}
