#include<stdio.h>

int main()
{
	int a, grade, room, num;
	
	printf("�й��� �Է��Ͻÿ�.");
	scanf("%d", &a);
	grade = a / 1000;
	room = a % 1000 / 100;
	num = a % 100;
	printf("%d�г� %d�� %d��", grade, room, num);
	return 0;
}
