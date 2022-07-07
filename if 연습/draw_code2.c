#include<stdio.h>

int main()
{
	int num;
	
	printf("자동차 자석 수를 적으시오.");
	scanf("%d", &num);
	if(num == 2)
	{
		printf("스포츠카");	
	}
	else if(num == 5)
	{
		printf("승용차");
	}
	else if(num == 7)
	{
		printf("SUV");
	}
	else if(num == 9)
	{
		printf("승합차");
	}
	else if(num == 12)
	{
		printf("미니버스");
	}
	else
	{
		printf("입력오류");
	}
	return 0;
}
