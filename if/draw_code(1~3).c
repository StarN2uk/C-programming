#include<stdio.h>

int main()
{
	int num1, num2, num3, x;
	printf("������ ����� ����Ͻÿ�.");
	scanf("%d", &num1);
	
	if(num1 >= 0) printf("���\t");
	else printf("����\t");
	if(num1 % 2 == 0) printf("¦��\n");
	else printf("Ȧ��\n");
	if(num1 % 3 == 0) printf("3�� ���\n");
	else printf("3�� ���X\n");
	return 0;
}
