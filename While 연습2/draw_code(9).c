#include<stdio.h>

int main()
{
	int n;
	do
	{
		printf("3의 배수를 입력하시오.");
		scanf("%d", &n);
	}while(n % 3 == 0);
	return 0;
}
