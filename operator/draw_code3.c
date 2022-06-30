#include<stdio.h>

int main()
{
	int num = 3;
	
	printf("%d\n", num -= 1);
	printf("%d\n", --num);
	printf("%d\n", num--);
	printf("%d\n", num);
	return 0;
}
