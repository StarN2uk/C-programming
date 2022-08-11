#include<stdio.h>

int main()
{
	int v, n, f, i, j;
	
	printf("정수를 두개 입력하시오.");
	scanf("%d %d", &n, &f);
	
	v = n;
	i = 0;
	j = 0;
	do
	{
		j = j + n;
		n--;
		i++;
	}while(n >= f);
	printf("%d과 %d사이 수의 개수는: %d\n", v, f, i - 2);
	printf("%d과 %d사이 수들의 합은: %d", v, f, j);
	return 0;
}
