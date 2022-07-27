#include<stdio.h>

int main()
{
	int i;
	
	for(i = 0; i < 10; i++)
	{
		if(i % 3 == 0)
		{
			printf("3");
		}
		else if(i % 3 == 1)
		{
			printf("2");
		}
		else
		{
			printf("1");
		}
	}
	return 0;
}
