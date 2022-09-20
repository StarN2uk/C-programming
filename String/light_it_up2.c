#include<stdio.h>

int main()
{
	char ch;
	
	printf("문자를 입력하세요 : ");
	ch = getchar();
	putchar(ch);
	printf("%c %d\n", ch, ch); 
	return 0;
}
