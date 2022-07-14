#include<stdio.h>

int main()
{
	int n, i, max, least;
	printf("두 정수를 입력하시오.");
	scanf("%d %d", &n, &i);
	if(i % 2 == 0 && n % 2 == 0)
	{
		printf("%d", i * n);
	}
	else if(i % 2 != 0 && n % 2 != 0)
	{
		printf("%d", i+n);
	}
	else
	{
		if(i > n)
		{
			max = i;
			least = n;
			printf("%d", max-least);
		}
		else if(n > i)
		{
			max = n;
			least = i;
			printf("%d", max-least);
		}
	}
	return 0;
}
