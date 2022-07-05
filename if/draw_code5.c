#include<stdio.h>

int main()
{
	float num1;
	
	printf("실수(음수&양수)를 입력하시오.");
	scanf("%f", &num1);
	
	if(num1 >= 0)
	{
		printf("%.1f", num1);
	}
	else
	{
		printf("%.1f", num1 * -1);
	}
	return 0;
}
