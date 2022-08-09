#include<stdio.h>

int main()
{
	int m, n;
	
	for(m = 1; m <= 100; m++)
	{
		printf("%d: ", m);
		for(n = 1; n <= m; n++)
		{
			if(m % n == 0)
			{
				printf("%d ", n);
			}
		}
		printf("\n");
	}
	return 0;
}
