#include<stdio.h>

int main()
{
	int i, n, count;
	printf("�ڿ����� ���ÿ�.");
	scanf("%d", &n);
	count = 0;
	i = n;
	do
	{
		n = n / 10;
		count++;
		
		if(n < 1)
		{
			printf("%d�� %d�ڸ� ���Դϴ�.", i, count);
			break;
		}
	}while(1);
	return 0;
}
