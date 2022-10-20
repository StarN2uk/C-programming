#include<stdio.h>

struct divide{
	int i;
	int j;
};

int main()
{
	int a, b;
	struct divide k;
	scanf("%d %d", &a, &b);
	k.i = a / b;
	k.j = a % b;
	printf("¸ò = %d, ³ª¸ÓÁö = %d", k.i, k.j);
	return 0;
}
