#include<stdio.h>

int main()
{
	int n, i, count;
	
	do{
		printf("10이하의 자연수를 입력하시오.");
		scanf("%d", &n);
	}while(n > 10);
	i = 1;
	count = 1;
	while(1)
	{
		printf("%d ", i);
		
		if(i == count)
		{
			i = 0;
			printf("\n");
			
			count++;
		}
		
		if(count > n)
		{
			break;
		}
		i++;
	}
	return 0;
}
