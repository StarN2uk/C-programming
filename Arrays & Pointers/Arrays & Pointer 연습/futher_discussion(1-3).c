#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ar[10][10];
	int a, b, i;
	printf("������ �ϳ� ���ÿ�.");
	scanf("%d", &i);
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
	for(a = 0; a < 10; a++)
	{
		for(b = 0; b < 10; b++)
		{
			if(i == ar[a][b])
			{
				printf("%d�� %d��\n", b + 1, a + 1);
			}
		}
		printf("\n");
	}
	return 0;
}
