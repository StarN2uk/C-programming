#include<stdio.h>

int main()
{
	int i, n, count;
	printf("자연수를 쓰시오.");
	scanf("%d", &n);
	count = 0;
	i = n;
	do
	{
		n = n / 10;
		count++;
		
		if(n < 1)
		{
			printf("%d는 %d자리 수입니다.", i, count);
			break;
		}
	}while(1);
	return 0;
}
