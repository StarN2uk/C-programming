#include<stdio.h>

int main()
{
	int num;
	
	printf("로켓의 높이를 조작하시오.");
	scanf("%d", &num);
	if(num >= 0 && num <= 11)
	{
		printf("기상환경");
	}
	else if(num <= 50)
	{
		printf("오존층");
	}
	else if(num <= 80)
	{
		printf("유성관찰");
	}
	else if(num <= 1000)
	{
		printf("오로라, 인공위성의 궤도");
	}
	else
	{
		printf("우주");
	}
	return 0;
}
