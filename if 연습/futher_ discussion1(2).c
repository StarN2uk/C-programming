#include<stdio.h>

int main()
{
	int num;
	
	printf("������ �Է��Ͻÿ�");
	scanf("%d", &num);
	if(num % 12 == 0)
	{
		printf("12�� ���");
	}
	else if(num % 30 == 0)
	{
		printf("30�� ���");
	}
	else
	{
		printf("�� �� �ƴ�");
	}
	return 0;
}
