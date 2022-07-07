#include<stdio.h>

int main()
{
	int a, b, c, max, least;
	
	printf("세 정수를 써보시오.");
	scanf("%d %d %d", &a, &b, &c);
	max = a;
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
	printf("%d\t", max);
	printf("%d", least);
	return 0;
}
