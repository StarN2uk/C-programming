#include<stdio.h>

int main()
{
	int a, h, m, s;
	
	printf("다엘이의 단축마라톤(10km) 기록(초)을 입력하시오.");
	scanf("%d", &a);
	h = a / 3600;
	m = a % 3600 / 60;
	s = a % 60;
	printf("%d시간 %d분 %d초", h, m, s);
	return 0;
}
