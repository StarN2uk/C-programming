#include<stdio.h>

int main()
{
	int i, n, sum, num;
	sum = 0;
	num = 0;
	
	printf("�ڿ����� �Է��Ͻÿ�.");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		if(i % 6 == 0)
		{
			printf("%d ", i);
			num = num + 1;
			sum = sum + i;
		}
	}
	printf("\n%d��\t%d", num, sum);
	return 0;
}
