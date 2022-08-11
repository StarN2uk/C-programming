#include<stdio.h>

int main()
{
	int n, i, j;
	
	printf("정수를 입력하시오.");
	scanf("%d", &n);
	
	j = 0;
	do
	{
		i = n % 10;
		j = j + i;
		n = (n - i) / 10;
		printf("%d ", i);
	}while(n > 0);
	printf("\n합: %d", j);
	return 0;
}
