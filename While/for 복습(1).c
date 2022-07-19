#include<stdio.h>

int main()
{
	int a, i;
	
	printf("하나의 정수를 입력하시오.");
	scanf("%d", &a);
	for (i = 3; i <= a; i = i + 3)
	{
		printf("%d ", i);
	}
	return 0;
}
