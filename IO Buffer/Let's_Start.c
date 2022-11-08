#include<stdio.h>

int main()
{
	int a, b, c;
	
	scanf("%d", &a);
	printf("a = %d\n", a);
	scanf("%d%d", &a, &b);
	printf("a = %d b = %d\n", a, b);
	scanf("%d%d%d", &a, &b, &c);
	printf("a = %d b = %d c = %d\n", a, b, c);
	
	return 0;
}
