#include<stdio.h>

void Divisor(int n)
{
	int i;
	int Divisor = 0;
	
	printf("%d의 약수는", 10);
	for(i = 1; i <= n; i++)
	{
		if(n % i == 0)
		{
			printf("%d ", i);
		}
	}
}




int main()
{
	Divisor(10);
	return 0;
}
