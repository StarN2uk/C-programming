#include<stdio.h>

int main()
{
	int a, i;
	
	printf("�ϳ��� ������ �Է��Ͻÿ�.");
	scanf("%d", &a);
	for (i = 3; i <= a; i = i + 3)
	{
		printf("%d ", i);
	}
	return 0;
}
