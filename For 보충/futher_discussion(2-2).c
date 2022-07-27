#include<stdio.h>

int main()
{
	int i, n, sum, num;
	sum = 0;
	num = 0;
	
	printf("자연수를 입력하시오.");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		if(i % 6 == 0)
		{
			printf("%d ", i);
			num = num + 1;
			sum = sum + i;
		}
	}
	printf("\n%d개\t%d", num, sum);
	return 0;
}
