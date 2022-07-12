#include<stdio.h>

int main()
{
	int a;
	
	printf("점수를 입력하시오.");
	scanf("%d", &a);
	if(a % 2 == 0 && a % 3 == 0)
	{
		printf("2와 3의 공배수이다.");
	}
	else
	{
		printf("응 아니야");	
	}
	return 0;
}
