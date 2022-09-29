#include<stdio.h>
#include<stdlib.h>
void InputInt(int*);
void InputDouble(double*);
void PrintInt(int*);
void PrintDouble(double*);
void ChangeInt(int*);
void ChangeDouble(double*);

void InputInt(int *n)
{
	fflush(stdin);
	scanf("%d\n", n);
}

void InputDouble(double *d)
{
	fflush(stdin);
	scanf("%f\n", d);
}

void PrintInt(int *n)
{
	printf("%d\n", *n);
}

void PrintDouble(double *d)
{
	printf("%f\n", *d);
}

void ChangeInt(int *n)
{
	*n = *n - 1;
}

void ChangeDouble(double *d)
{
	*d = *d - 1;
}

int main()
{
	int n;
	double d;

	InputInt(&n);
	InputDouble(&d);
	PrintInt(&n);
	PrintDouble(&d);
	ChangeInt(&n);
	ChangeDouble(&d);
	PrintInt(&n);
	PrintDouble(&d);
	return 0;
}
