#include<stdio.h>

int main()
{
	int n = 0;
	
	printf("%d\n", n);
	printf("%d\n", n += 3);
	printf("%d\n", n *= 0);
	printf("%d\n", n += 5);
	printf("%d\n", n++);
	printf("%d\n", ++n);
	printf("%d\n", n % 5);
	printf("%d\n", --n);
	printf("%d\n", n--);
	printf("%d\n", n);
	return 0;
}
