#include<stdio.h>

int main()
{
	int a;
	
	printf("정수를 입력하시오.");
	scanf("%d", &a);
	if(12 % a == 0 && 30 % a == 0)
	{
		printf("12와 30의 공약수이다.");
	}
	else
	{
		printf("응 아니야");
	}
	return 0;
}
