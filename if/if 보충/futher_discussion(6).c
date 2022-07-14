#include<stdio.h>

int main()
{
	int a, b;
 
	printf("정수 두 개를 입력하시오(1 ~ 20).");
	scanf("%d %d", &a, &b);
	if(a - 12 < 0)
	{
		a = (a - 12) * -1;
	}
	if(b - 12 < 0)
	{
		b = (b - 12) * -1;
	}
	if(a < b)
	{
		printf("b");
	}
	if(b < a)
	{
		printf("a");
	}
	return 0;
}
