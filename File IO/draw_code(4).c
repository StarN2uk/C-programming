#include<stdio.h>

int main()
{
	int n, num;
	char *res, str[20];
	
	printf("���� �Է�: ");
	n = getchar();
	printf("n = %d\n", n);
	
	printf("���ڿ� �Է�: ");
	res = gets(str);
	printf("res = %d\n", res);
	
	printf("���� �Է�: ");
	n = scanf("%d", &num);
	printf("n = %d", n);
	
	return 0; 
}
