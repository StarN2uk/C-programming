#include<stdio.h>

int main()
{
	int i, n, count;
	i = 0;
	count = 0;
	
	printf("������ �Է��Ͻÿ�.");
	scanf("%d", &n);
	printf("%d�� ����� ", n);
	while(i <= n)
	{
		i++;
		switch(n % i)
		{
			case 0 :
				printf("%d ", i);
				count++;
				break;
			case 1 :
				printf("");
				break;
		}
	}
	printf("\t����� ������ %d", count);
	return 0;
}
