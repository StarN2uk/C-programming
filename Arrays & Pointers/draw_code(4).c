#include<stdio.h>

void PrintArray(int ar[]);
void InputData(int *p);

int main()
{
	int ar[20] = {0};
	int i, j;
	
	PrintArray(ar);
	InputData(ar);
	PrintArray(ar);
	
	return 0;
}

void PrintArray(int ar[])
{
	int i;
	for(i = 0; i < 20; i++)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
}

void InputData(int *p)
{
	int j;
	for(j = 0; j < 20; j++)
	{
		scanf("%d\n", p + j);
	}
}
