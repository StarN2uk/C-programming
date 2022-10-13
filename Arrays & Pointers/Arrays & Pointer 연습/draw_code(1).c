#include<stdio.h>

int main()
{
	int ar[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	int *p;
	int i;
	int len = sizeof(ar[0]) / sizeof(ar[0][0]);
	
	for(i = 0; i < len; i++)
	{
		printf("%d ", *(ar[1]+i));
	}
	printf("\n");
	
	p = ar[2];
	
	for(i = 0; i < len; i++)
	{
		printf("%d ", *(p+i));
	}
	printf("\n");
	
	return 0;
}
