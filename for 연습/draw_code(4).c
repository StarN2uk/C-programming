#include<stdio.h>

int main()
{
	int i, n;
	
	printf("�ڿ����� �Է��Ͻÿ�.");
	scanf("%d", &n);
	for(i = 2; i <= 9; i++)
	{
		printf("%d��%d = %d\n", n, i, n * i);
	}
	return 0;
}
