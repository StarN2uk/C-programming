#include<stdio.h>

int main()
{
	char str[4096];
	int i = 0;
	int a = 0;
	int j = 1;
	gets(str);
	while(str[a] != 0)
	{
		a++;
	}
	for(i = 0; i < a; i++)
	{
		if(str[i] == ' ')
		{
			j++;
		}
	}
	printf("%d", j);
	return 0;
}
