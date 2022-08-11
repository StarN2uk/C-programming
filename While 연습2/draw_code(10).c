#include<stdio.h>

int main()
{
	int n, i;
	i = 0;
	n = 0;
	do
	{
		i = i + n;
		printf("동전만 입력하시오.");
		scanf("%d", &n);
	}while(n == 10 || n == 50 || n == 100 || n == 500);
	printf("%d원", i);
	return 0;
}
