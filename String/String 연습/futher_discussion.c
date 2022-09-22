#include<stdio.h>

int main()
{
	char str1[4096];
	int i = 0;
	int j = 0;
	gets(str1);
	while(str1[i] != 0)
	{
		i++;
	}
	for(j = 0; j <= i; j++)
	{
		printf("%c", str1[j] - 32);
	}
	return 0;
}
