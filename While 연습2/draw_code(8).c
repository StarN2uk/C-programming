#include<stdio.h>

int main()
{
	int v, n, f, i, j;
	
	printf("������ �ΰ� �Է��Ͻÿ�.");
	scanf("%d %d", &n, &f);
	
	v = n;
	i = 0;
	j = 0;
	do
	{
		j = j + n;
		n--;
		i++;
	}while(n >= f);
	printf("%d�� %d���� ���� ������: %d\n", v, f, i - 2);
	printf("%d�� %d���� ������ ����: %d", v, f, j);
	return 0;
}
