#include<stdio.h>

int main() 
{
	int num;
	
	printf("10000 이하 정수 입력: ");
	scanf("%d", &num);
	
	if(num < 10) printf("한 자리 수\n");
	else if(num < 100) printf("두 자리 수\n");
	else if(num < 1000) printf("세 자리 수\n");
	else if(num < 10000) printf("네 자리 수\n");
	else printf("다섯 자리 수\n");
	return 0;
}
