#include<stdio.h>

int main()
{
	float a, b, c, max, medium, least;
	
	printf("세 실수를 출력하시오.");
	scanf("%f %f %f", &a, &b, &c);
	max = a;
	medium = b;
	least = c;
	if(b > max)
	{
		max = b;
	}
	if(c > max)
	{
		max = c;
	}
	if(b < least)
	{
		least = b;
	}
	if(a < least)
	{
		least = a;
	}
	
	if(a != max && a != least)
	{
		medium = a;
	}
	else if(b != max && b != least)
	{
		medium = b;
	}
	else if(c != max && c != least)
	{
		medium = c;
	}
	printf("%.1f\t%.1f\t%.1f", max, medium, least);
	return 0;
}
