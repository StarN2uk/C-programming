#include<stdio.h>

int main()
{
	int num1, num2, num3, x;
	printf("음수나 양수를 출력하시오.");
	scanf("%d", &num1);
	
	if(num1 >= 0) printf("양수\t");
	else printf("음수\t");
	if(num1 % 2 == 0) printf("짝수\n");
	else printf("홀수\n");
	if(num1 % 3 == 0) printf("3의 배수\n");
	else printf("3의 배수X\n");
	return 0;
}
