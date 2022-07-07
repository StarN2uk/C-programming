#include<stdio.h>

int main()
{
	int num;
	
	printf("정수를 입력하시오");
	scanf("%d", &num);
	if(num % 12 == 0)
	{
		printf("12의 배수");
	}
	else if(num % 30 == 0)
	{
		printf("30의 배수");
	}
	else
	{
		printf("둘 다 아님");
	}
	return 0;
}
