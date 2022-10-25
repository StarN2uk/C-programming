#include<stdio.h>

int main()
{
	int n, num;
	char *res, str[20];
	
	printf("문자 입력: ");
	n = getchar();
	printf("n = %d\n", n);
	
	printf("문자열 입력: ");
	res = gets(str);
	printf("res = %d\n", res);
	
	printf("형식 입력: ");
	n = scanf("%d", &num);
	printf("n = %d", n);
	
	return 0; 
}
