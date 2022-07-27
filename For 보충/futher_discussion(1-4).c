#include<stdio.h>

int main()
{
	int i;
	
	for(i = 0; i < 10; i++)
	{
		if(i % 5 == 0)
		{
			printf("1");
		}
		else if(i % 5 == 1)
		{
			printf("2");
		}
		else if(i % 5 == 2)
		{
			printf("3");
		}
		else if(i % 5 == 3)
		{
			printf("4");
		}
		else if(i % 5 == 4)
		{
			printf("5");
		}
	}
	return 0;
}
