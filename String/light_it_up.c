#include<stdio.h>

int main()
{
	char ch1, ch2;
	
	ch1 = 'A';
	ch2 = 'a';
	ch1 = ch1 + ('a' - 'A');
	ch2 = ch2 - ('a' - 'A');
	printf("%c %c", ch1, ch2);
	return 0;
}
