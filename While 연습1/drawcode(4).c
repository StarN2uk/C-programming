#include<stdio.h>

int main()
{
	int n, i, count;
	
	do{
		printf("10������ �ڿ����� �Է��Ͻÿ�.");
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
