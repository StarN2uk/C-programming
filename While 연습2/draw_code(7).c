#include<stdio.h>

int main()
{
	int v, n, f, i, j, count;
	
	printf("������ �Է��Ͻÿ�.");
	scanf("%d", &n);
	
	count = 1;
	f = n;
	v = n;
	do
	{
		f = f / 10;
		count = count * 10;
	}while(f >= 1);
	j = 0;
	do
	{
		i = n % 10;
		n = (n - i) / 10;
		j = j + i * (count / 10);
		count = count / 10;
	}while(count >= 1);
	printf("%d�� ������ ������: %d\n", v, j);
	printf("�μ��� ����: %d", j + v);
	return 0;
}
