#include<stdio.h>

int main()
{
	int n, i, max, least;
	printf("�� ������ �Է��Ͻÿ�.");
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
