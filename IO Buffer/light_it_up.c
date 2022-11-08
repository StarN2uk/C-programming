#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>

int main()
{
	char ch;
	
	ch = _getche();
	printf("\nch = %d : %c\n", ch, ch);
	putchar(ch);
	return 0;
}
