#include<stdio.h>
#include<stdlib.h>

int main()
{
	float ar[10];
	float min;
	min = 1000.0;
	int i;
	srand(time(NULL));
	for(i = 1; i < 10; i++)
	{
		ar[i] = rand() % 1000 / 10.0;
	}
	for(i = 1; i < 10; i++)
	{
		if(ar[i] < min)
		{
			min = ar[i];
		}
	}
	ar[0] = min;
	for(i = 0; i < 10; i++)
	{
		printf("%.1f ", ar[i]);
	}
	
	return 0;
}
