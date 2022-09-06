#include<stdio.h>

int main()
{
	char c; int i; long l; float f; double d;
	
	printf("%d %d %d %d %d\n", sizeof(c), sizeof(i), sizeof(l), sizeof(f), sizeof(d));
	printf("%d %d %d\n", sizeof(char), sizeof(int), sizeof(long));
	printf("%d %d\n", sizeof(float), sizeof(double));
	printf("%d %d\n", sizeof(153), sizeof(5.2));
	return 0;
}
