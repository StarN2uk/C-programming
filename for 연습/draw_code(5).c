#include<stdio.h>

int main()
{
	int a, b, c, d, e;
	
	printf("�ڿ����� 5�� �Է¹޴´�.");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	a = a * 10000;
	b = b * 1000;
	c = c * 100;
	d = d * 10;
	printf("%d", a + b + c + d + e);
	return 0;
}
