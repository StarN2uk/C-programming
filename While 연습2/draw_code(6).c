#include<stdio.h>

int main()
{
	int n, i, j;
	
	printf("������ �Է��Ͻÿ�.");
	scanf("%d", &n);
	
	j = 0;
	do
	{
		i = n % 10;
		j = j + i;
		n = (n - i) / 10;
		printf("%d ", i);
	}while(n > 0);
	printf("\n��: %d", j);
	return 0;
}
