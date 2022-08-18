#include<stdio.h>

int main()
{
	int i, n;
	i = 0;
	printf("자연수를 입력하시오.");
	scanf("%d", &n);
	printf("%d의 약수는 ", n);
	while(i <= n)
	{
		i++;
		switch(n % i)
		{
			case 0 :
				printf("%d ", i);
			case 1 :
				printf("");
		}
	}
	return 0;
}
