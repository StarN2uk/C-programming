#include<stdio.h>

int main()
{
	int num;
	
	printf("������ �Է��ϼ���.");
	scanf("%d", &num);
	if(num % 2 == 0)
	{
		printf("2�� ���");
	} 
	else if(num % 3 == 0)
	{
		printf("3�� ���");
	}
	else
	{
		printf("�� �� �ƴ�");
	}
	return 0;
}
