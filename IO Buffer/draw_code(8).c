#include<stdio.h>

int main()
{
	char c;
	int i, a;
	
	c = getchar();
	while(c != '\n')
	{
		if(c <= 122 && c >= 97)
		{
			c = c - 32;
		}
		printf("%c", c);
		c = getchar();
	}

	return 0;
}
