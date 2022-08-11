#include<stdio.h>

int main()
{
	int v, n, f, i, j, count;
	
	printf("정수를 입력하시오.");
	scanf("%d", &n);
	
	count = 1;
	f = n;
	v = n;
	do
	{
		f = f / 10;
		count = count * 10;
	}while(f >= 1);
	j = 0;
	do
	{
		i = n % 10;
		n = (n - i) / 10;
		j = j + i * (count / 10);
		count = count / 10;
	}while(count >= 1);
	printf("%d을 뒤집은 정수는: %d\n", v, j);
	printf("두수의 합은: %d", j + v);
	return 0;
}
