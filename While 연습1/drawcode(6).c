#include<stdio.h>

int main()
{
	int i, n, sum;
	
	printf("������ �Է��Ͻÿ�.");
	scanf("%d", &n);
	// �׷��ϱ� ����� �ϰ�, �Է¹��� ���� n�� 10���� ���� �������� ����ϰ�, �װ� n���� ����, �װ� 100, 1000, 10000......�ݺ��ϱ�.
	sum = 0;
	while(1)
	{
		i = n % 10;
		printf("%d ", i);
		n = (n - i) / 10;
		sum = sum + i;
		if(n < 1)
		{
			printf("\n%d", sum);
			break;
		}
	}
	return 0;
}
