#include<stdio.h>

int main()
{
	int n;
	do
	{
		scanf("%d", &n);
	}while(n > 30 || n < 0);
	while(1)
	{
		int i = 1;
		while(i <= n)
		{
			printf("%d", i);
			i++;
		}
	}
	return 0;
}
