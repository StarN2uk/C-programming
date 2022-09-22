#include<stdio.h>

int main()
{
	char str1[25] = "C language is powerful";
	char str2[ ] = "Coding is computer programming";
	int i = 0;
	int j = 0;
	int a = 0;
	int b = 0;
	while(str1[i] != 0)
	{
		i++;
	}
	for(j = 0; j <= (i - 1); j++)
	{
		printf("%c", str1[j]);
	}
	printf("\n");
	while(str2[a] != 0)
	{
		a++;
	}
	for(b = 0; b <= (a - 1); b++)
	{
		printf("%c", str2[b]);
	}
	return 0;
}
