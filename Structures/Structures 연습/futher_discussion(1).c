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
	printf("�� = %d, ������ = %d", k.i, k.j);
	return 0;
}
