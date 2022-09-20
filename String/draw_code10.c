#include<stdio.h>

int main()
{
	char str[] = "Coding is computer programming";
	int i = 0;
	int j = 0;
	while(str[i] != 0)
	{
		i++;
	}
	for(j = (i - 1); j >= 0; j--)
	{
		printf("%c", str[j]);
	}
	return 0;
}
