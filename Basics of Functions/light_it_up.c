#include<stdio.h>

int Sum(int n)
{
	int i;
	int sum;
	sum = 0;
	
	for(i = 1; i <= n; i++)
	{
		sum += i;
	}
	
	return 5;
}


int main()
{
	printf("1부터 %d까지의 합은 %d입니다. ", 10, Sum(10));
	
	return 0;
}
