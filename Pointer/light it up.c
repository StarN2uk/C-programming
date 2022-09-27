#include<stdio.h>

int main()
{
	int a;		double b;		char c;
	int *pa; double *pb; char *pc;
	
	a = 153; b = 12.7; c = 'J';
	pa = &a; pb = &b; pc = &c;
	printf("pa = %x pb = %x pc = %x\n", pa, pb, pc);
	printf("&a = %p &b = %p &c = %p\n", &a, &b, &c);
	
	printf("a = %d b = %lf c = %c\n", a, b, c);
	printf("*pa = %d *pb = %lf *pc = %c\n", *pa, *pb, *pc);
	return 0;
}
