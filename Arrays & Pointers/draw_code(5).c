#include<stdio.h>
#include<stdlib.h>

void InputData(int *p);
void PrintArray(int ar[]);
int GetMax(int *ar);
int GetMin(int *ar);

int main()
{
	int ar[10] = {0};
	int max, min;
	
	InputData(ar);
	max = GetMax(ar);
	min = GetMin(ar);
	PrintArray(ar);
	
	return 0;
}

void PrintArray(int ar[])
{
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
}

void InputData(int *p)
{
	int j;
	for(j = 0; j < 10; j++)
	{
		scanf("%d\n", p + j);
	}
}

int GetMax(int *ar)
{
	int max, k;
	max = ar[0];
	for(k = 0; k < 10; k++)
	{
		if(ar[k] > max)
		{
			max = ar[k];
		}
	}
	printf("%d\n", max);
	return 0;
}

int GetMin(int *ar)
{
	int min, l;
	min = ar[0];
	for(l = 0; l < 10; l++)
	{
		if(ar[l] < min)
		{
			min = ar[l];
		}
	}
	printf("%d\n", min);
}
