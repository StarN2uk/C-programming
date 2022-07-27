#include<stdio.h>

int main()
{
	int n, i;
	n = 8000;
	
	for(i = 1; i <= 9; i++)
	{
		n = n / 2;
		printf("%d ", n);
	}
	return 0;
}
