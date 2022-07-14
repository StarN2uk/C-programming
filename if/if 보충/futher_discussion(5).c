#include<stdio.h>

int main()
{
	int a, grade, room, num;
	
	printf("학번을 입력하시오.");
	scanf("%d", &a);
	grade = a / 1000;
	room = a % 1000 / 100;
	num = a % 100;
	printf("%d학년 %d반 %d번", grade, room, num);
	return 0;
}
