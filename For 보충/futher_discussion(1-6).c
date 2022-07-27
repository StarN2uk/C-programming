#include<stdio.h>

int main()
{
	int i;
	
	for(i = 0; i < 10; i++)
	{
		printf("%d ", (10 - i) * (10 - i));
	}
	return 0;
}
