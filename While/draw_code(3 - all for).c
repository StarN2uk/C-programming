#include<stdio.h>

int main()
{
	int n, m, i, a;
	
	printf("10 이하의 두 수를 입력하시오.");
	scanf("%d %d", &n, &m);
	for(i = 1; i <= m; i++)
	{
		for(a = 1; a <= n; a++)
		{
			printf("%d ", a);
		}
		printf("\n");
	}
	return 0;
}
