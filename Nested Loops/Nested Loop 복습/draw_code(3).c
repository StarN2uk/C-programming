#include<stdio.h>

int main()
{
	int i, n, isPrime;
	
	for(n = 100; n <= 999; n++)
	{
		isPrime = 0;
		for(i = 2; i <= (n - 1); i++)
		{
			if(n % i == 0)
			{
				isPrime = 1;
				break;
			}
		}
		if(isPrime == 0)
		{
			printf("%d\n", n);
		}
	}
	return 0;
}
