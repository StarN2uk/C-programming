#include<stdio.h>

int main()
{
	int ar[10];
	int i;
	
	for(i = 1; i <= 10; i++)
	{
		if(i % 2 != 0)
		{
			printf("ar[%d] = %d\n", (i - 1), i);
		}
	}
	return 0;
}
