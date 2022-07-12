#include<stdio.h>

int main()
{
	int i, n, sum;
	sum = 0;
	
	printf("자연수를 입력하시오.");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	printf("%d", sum);
	return 0;
}
