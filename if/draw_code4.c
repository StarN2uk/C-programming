#include<stdio.h>

int main()
{
	int num1, num2;
	
	printf("�� ���� ������ �Է��Ͻÿ�.");
	scanf("%d %d", &num1, &num2);
	
	if(num1 > num2)
	{
		if(num1 % num2 == 0)
		{
			printf("����������.");
		}
		else
		{
			printf("������ ���� �ʴ´�.\n");
		}
	}
	else
	{
		if(num2 % num1 == 0)
		{
			printf("����������.");
		}
		else
		{
			printf("������ ���� �ʴ´�.");
		} 
	}
	return 0;
}
