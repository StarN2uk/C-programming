#include<stdio.h>

int main()
{
	int a, b, c, max, least;
	
	printf("�� ������ �Ẹ�ÿ�.");
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
