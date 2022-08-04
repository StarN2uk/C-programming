#include<stdio.h>

int main()
{
	int i, n, sum;
	
	printf("정수를 입력하시오.");
	scanf("%d", &n);
	// 그러니까 출력을 하고, 입력받은 숫자 n을 10으로 나눈 나머지를 출력하고, 그걸 n에서 빼고, 그걸 100, 1000, 10000......반복하기.
	sum = 0;
	while(1)
	{
		i = n % 10;
		printf("%d ", i);
		n = (n - i) / 10;
		sum = sum + i;
		if(n < 1)
		{
			printf("\n%d", sum);
			break;
		}
	}
	return 0;
}
