#include<stdio.h>

int main()
{
	int num1, num2;
	
	printf("두 개의 정수를 입력하시오.");
	scanf("%d %d", &num1, &num2);
	
	if(num1 > num2)
	{
		if(num1 % num2 == 0)
		{
			printf("나누어진다.");
		}
		else
		{
			printf("나누어 지지 않는다.\n");
		}
	}
	else
	{
		if(num2 % num1 == 0)
		{
			printf("나누어진다.");
		}
		else
		{
			printf("나누어 지지 않는다.");
		} 
	}
	return 0;
}
