#include<stdio.h>

int main()
{
	int i, n;
	
	printf("정수를 입력하시오.");
	scanf("%d", &n); 
	for(i = n * -1; i <= n; i++)
	{
		printf("%d ", i);
	}
	return 0;
}
