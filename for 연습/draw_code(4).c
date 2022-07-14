#include<stdio.h>

int main()
{
	int i, n;
	
	printf("자연수를 입력하시오.");
	scanf("%d", &n);
	for(i = 2; i <= 9; i++)
	{
		printf("%d×%d = %d\n", n, i, n * i);
	}
	return 0;
}
