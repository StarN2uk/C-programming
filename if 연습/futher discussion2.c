#include<stdio.h>

int main()
{
	int num;
	
	printf("������ ���̸� �����Ͻÿ�.");
	scanf("%d", &num);
	if(num >= 0 && num <= 11)
	{
		printf("���ȯ��");
	}
	else if(num <= 50)
	{
		printf("������");
	}
	else if(num <= 80)
	{
		printf("��������");
	}
	else if(num <= 1000)
	{
		printf("���ζ�, �ΰ������� �˵�");
	}
	else
	{
		printf("����");
	}
	return 0;
}
