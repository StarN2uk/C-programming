#include<stdio.h>
#include<stdlib.h>

int main()
{
	float ar[10];
	int i;
	srand(time(NULL));
	for(i = 0; i < 10; i++)
	{
		ar[i] = rand() % 1000 / 10.0;
		printf("%.1f ", ar[i]);
	}
	return 0;
}
