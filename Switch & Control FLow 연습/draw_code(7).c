#include<stdio.h>

int main()
{
	int i, n, count;
	i = 0;
	count = 0;
	
	printf("정수를 입력하시오.");
	scanf("%d", &n);
	printf("%d의 약수는 ", n);
	while(i <= n)
	{
		i++;
		switch(n % i)
		{
			case 0 :
				printf("%d ", i);
				count++;
				break;
			case 1 :
				printf("");
				break;
		}
	}
	printf("\t약수의 개수는 %d", count);
	return 0;
}
