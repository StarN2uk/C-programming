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
	printf("1���� %d������ ���� %d�Դϴ�. ", 10, Sum(10));
	
	return 0;
}
