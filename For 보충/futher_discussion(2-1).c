#include<stdio.h>

int main()
{
	int n, i;
	
	printf("자연수를 써넣으시오.");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		if(i % 3 == 0)
		{
			printf("%d", i);
		}
	}
	return 0;
}
