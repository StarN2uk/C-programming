#include<stdio.h>

int main()
{
	int n, i;
	
	printf("�ڿ����� ������ÿ�.");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		if(i % 3 == 0)
		{
			printf("%d", i);
		}
	}
	return 0;
}
