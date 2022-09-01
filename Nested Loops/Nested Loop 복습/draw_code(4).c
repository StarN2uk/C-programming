#include<stdio.h>

int main()
{
	int i, n, isPrime, all;
	
	for(n = 1; n <= 100; n++)
	{
		isPrime = 1;
		for(i = 2; i < n; i++)
		{
			if(n % i == 0)
			{
				isPrime = 0;
				break;
			}
		}
		if(isPrime == 1)
		{
			all = all + n;
		}
	}
	printf("%d", all);
	return 0;
}
