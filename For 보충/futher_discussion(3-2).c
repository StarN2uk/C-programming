#include<stdio.h>

int main()
{
	int n, i, sum;
	sum = 1;
	
	printf("�ڿ����� �Է��Ͻÿ�.");
	scanf("%d", &n);
	
	for(i = 0; i <= n; i++)
	{
		sum = sum + i;
		printf("%d ", sum);
	}
	return 0;
}
