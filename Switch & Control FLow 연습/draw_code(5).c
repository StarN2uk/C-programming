#include<stdio.h>

int main()
{
	int i, n;
	i = 0;
	printf("�ڿ����� �Է��Ͻÿ�.");
	scanf("%d", &n);
	printf("%d�� ����� ", n);
	while(i <= n)
	{
		i++;
		switch(n % i)
		{
			case 0 :
				printf("%d ", i);
			case 1 :
				printf("");
		}
	}
	return 0;
}
