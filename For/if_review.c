#include<stdio.h>

int main()
{
	int a;
	
	printf("������ �Է��Ͻÿ�.");
	scanf("%d", &a);
	if(a % 2 == 0 && a % 3 == 0)
	{
		printf("2�� 3�� ������̴�.");
	}
	else
	{
		printf("�� �ƴϾ�");	
	}
	return 0;
}
