#include<stdio.h>

int main()
{
	int a;
	
	printf("������ �Է��Ͻÿ�.");
	scanf("%d", &a);
	if(12 % a == 0 && 30 % a == 0)
	{
		printf("12�� 30�� ������̴�.");
	}
	else
	{
		printf("�� �ƴϾ�");
	}
	return 0;
}
