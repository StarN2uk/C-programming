#include<stdio.h>

int main()
{
	int a, i;
	
	printf("������ ���ÿ�.");
	scanf("%d", &a);
	i = 1;
	while(i <= a)
	{
		if(i % 2 == 0)
		{
			printf("%d ", i * -1);
		}
		else if(i % 2 != 0)
		{
			printf("%d", i);
		}
		i = i + 1;
	}
	return 0;
}
