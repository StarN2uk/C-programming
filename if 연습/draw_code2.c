#include<stdio.h>

int main()
{
	int num;
	
	printf("�ڵ��� �ڼ� ���� �����ÿ�.");
	scanf("%d", &num);
	if(num == 2)
	{
		printf("������ī");	
	}
	else if(num == 5)
	{
		printf("�¿���");
	}
	else if(num == 7)
	{
		printf("SUV");
	}
	else if(num == 9)
	{
		printf("������");
	}
	else if(num == 12)
	{
		printf("�̴Ϲ���");
	}
	else
	{
		printf("�Է¿���");
	}
	return 0;
}
