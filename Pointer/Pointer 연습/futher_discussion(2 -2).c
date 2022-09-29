#include<stdio.h>

void Input(int *);
void SwapDate(int *, int *);

int main()
{
	int n, m, f;
	
	Input(&n);
	Input(&m);
	printf("Before : ");
	printf("n = %d m = %d\n", n, m);
	SwapData(&n, &m);
	printf("After : ");
	printf("n = %d m = %d\n", n, m);
	return 0;
}

void Input(int *n)
{
	scanf("%d", n);
}



void SwapData(int *n, int *m)
{
	int f = *m;
	*m = *n;
	*n = f;
}
