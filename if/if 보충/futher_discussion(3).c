#include<stdio.h>

int main()
{
	int i;
	
	printf("������� �Է��Ͻÿ�.");
	scanf("%d", &i);
	if(i <= 440)
	{
		printf("�����\t");
		if(i < 190)
		{
			printf("��������");
		}
		else if(i < 335)
		{
			printf("���� ��������");
		}
		else if(i < 720)
		{
			printf("�����ϱ�");
		}
	}
	else if(i < 440)
	{
		printf("�ʰ���\t");
		if(i < 1000)
		{
			printf("���ر�");
		}
		else if(i < 1200)
		{
			printf("���ױ�");
		}
	}
	else if(i < 1200)
	{
		printf("ȣ����\t");
		if(i < 1500)
		{
			printf("����");
		}
		else if(i < 2300)
		{
			printf("�뱸��");
		}
		else if(i < 2800)
		{
			printf("��õ��");
		}
	}
	else if(i < 7600)
	{
		printf("������\t");
		if(i < 3200)
		{
			printf("������ ��ձ�");
		}
		else if(i < 4500)
		{
			printf("�湫�� �̼��ű�");
		}
		else if(i < 7600)
		{
			printf("������ձ�");
		}
	}
	return 0;
}
