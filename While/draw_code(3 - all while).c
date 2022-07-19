#include<stdio.h>

int main()
{
	int n, m, i, a;
	
	printf("10 이하의 두 수를 입력하시오.");
	scanf("%d %d", &n, &m);
	i = 1;
	while(i <= m)
	{
		a = 1;
		while(a <= n)
		{
			printf("%d ", a);
			a = a + 1;
		}
		printf("\n");
		i = i + 1;
	}
	return 0;
}
