#include<stdio.h>

int main()
{
	char str1 = 'A', str2 = 'a';
	int i, j;
	for(i = 0; i < 26; i++)
	{
		printf("%c", str1++);
	}
	for(j = 0; j < 26; j++)
	{
		printf("%c", str2 + j);
	}
	return 0;
}
