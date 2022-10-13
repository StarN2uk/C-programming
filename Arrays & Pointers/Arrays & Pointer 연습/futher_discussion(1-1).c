#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ar[10][10];
	int a, b;
	srand(time(NULL));
	for(a = 0; a < 10; a++)
	{
		for(b = 0; b < 10; b++)
		{
			ar[a][b] = rand() % 100 + 1;
			printf("%d ", ar[a][b]);
		}
		printf("\n");
	}
	return 0;
}
