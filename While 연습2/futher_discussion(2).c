#include<stdio.h>

int main()
{
	int n, i, sum;
	
	i = 1;
	sum = 0;
	printf("��100���� ū ������ �Է��Ͻÿ���");
	scanf("%d", &n);
	
	while(i <= n)
	{
		if(i % 3 == 0 || i % 7 == 0)
		{
			printf("%d ", i);
			sum = sum + i;
		}
		i++;
	}
	printf("\n%d", sum);
	return 0;
}
