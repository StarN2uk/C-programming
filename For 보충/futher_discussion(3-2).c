#include<stdio.h>

int main()
{
	int n, i, sum;
	sum = 1;
	
	printf("자연수를 입력하시오.");
	scanf("%d", &n);
	
	for(i = 0; i <= n; i++)
	{
		sum = sum + i;
		printf("%d ", sum);
	}
	return 0;
}
