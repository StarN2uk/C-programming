#include<stdio.h>

int main()
{
	float max, num1, num2, num3, num4, num5;
	
	printf("실수 다섯 개를 나에게 받치시오.");
	scanf("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);
	
	max = num1;
	if(num2 >= max)
	{
		max = num2;
	}
	if(num3 >= max)
	{
		max = num3;
	}
	if(num4 >= max)
	{
		max = num4;
	}
	if(num5 >= max)
	{
		max = num5;
	}
	printf("%f", max);
	return 0;
}
