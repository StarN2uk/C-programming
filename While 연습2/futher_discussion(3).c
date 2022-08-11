#include<stdio.h>

int main()
{
	int n, count;
	
	count = 0;
	n = 1000;
	while(n > 1)
	{
		if(n % 2 == 0)
		{
			n = n / 2;
			printf("%d\n", n);
			count++;
		}
		else
		{
			n = (n + 1) / 2;
			printf("%d\n", n);
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
