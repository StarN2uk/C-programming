#include<stdio.h>

int main()
{
	int n, i, sum;
	
	printf("자연수를 입력하시오.");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		sum = i * i;
		printf("%d ", sum);
	}
	return 0;
}
