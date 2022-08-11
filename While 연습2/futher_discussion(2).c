#include<stdio.h>

int main()
{
	int n, i, sum;
	
	i = 1;
	sum = 0;
	printf("★100보다 큰 정수를 입력하시오★");
	scanf("%d", &n);
	
	while(i <= n)
	{
		if(i % 3 == 0 || i % 7 == 0)
		{
			printf("%d ", i);
			sum = sum + i;
		}
		i++;
	}
	printf("\n%d", sum);
	return 0;
}
