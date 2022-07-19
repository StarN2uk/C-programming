#include<stdio.h>

int main()
{
	int i, a;
	a = 0;
	
	for(i = 15; i >= 0; )
	{
		i = i - 4;
		if(i > 1)
		{
			i = i + 3;
		}
		a = a + 1;
		printf("%d ", a);
	}
	return 0;
}
