#include<stdio.h>

int main()
{
	int n, i;
	i = 0;
	n = 0;
	do
	{
		i = i + n;
		printf("������ �Է��Ͻÿ�.");
		scanf("%d", &n);
	}while(n == 10 || n == 50 || n == 100 || n == 500);
	printf("%d��", i);
	return 0;
}
