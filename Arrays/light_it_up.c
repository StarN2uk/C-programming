#include<stdio.h>

int main()
{
	int ar[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int br[10];
	int i;
	for(i = 1; i <= 10; i++)
	{
		// i    1 ~ 10 ÃÑ 10È¸ ¹Ýº¹
		br[(i - 1)] = i * 10;
		printf("%d ", br[(i - 1)]);
	}
	return 0;
}
