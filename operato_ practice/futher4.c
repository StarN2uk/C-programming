#include<stdio.h>

int main()
{
	int a, h, m, s;
	
	printf("�ٿ����� ���ึ����(10km) ���(��)�� �Է��Ͻÿ�.");
	scanf("%d", &a);
	h = a / 3600;
	m = a % 3600 / 60;
	s = a % 60;
	printf("%d�ð� %d�� %d��", h, m, s);
	return 0;
}
