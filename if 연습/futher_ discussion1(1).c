#include<stdio.h>

int main()
{
	int num;
	
	printf("정수를 입력하세요.");
	scanf("%d", &num);
	if(num % 2 == 0)
	{
		printf("2의 배수");
	} 
	else if(num % 3 == 0)
	{
		printf("3의 배수");
	}
	else
	{
		printf("둘 다 아님");
	}
	return 0;
}
