#include<stdio.h>

int main()
{
	int a, i;
	
	printf("정수를 쓰시오.");
	scanf("%d", &a);
	i = 1;
	while(i <= a)
	{
		if(i % 2 != 0)
		{
			printf("1");
		}
		else if(i % 2 == 0)
		{
			printf("-1 ");
		}
		i = i + 1;
	}
	return 0;
}
