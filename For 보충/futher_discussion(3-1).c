#include<stdio.h>

int main()
{
	int n, i, sum;
	
	printf("�ڿ����� �Է��Ͻÿ�.");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		sum = i * i;
		printf("%d ", sum);
	}
	return 0;
}
