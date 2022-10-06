#include<stdio.h>

int main()
{
	int ar[6][5] = {23, 22, 27, 21, 24, 21, 22, 25, 24, 23, 20, 23, 22, 21, 24, 25, 26, 24, 27, 28, 26, 24, 28, 29, 26, 27, 28, 29, 26, 27};
	int i, j, sum = 0;
	
	
	printf("학년을 쓰시오.");
	scanf("%d", &j);
	
	for(i = 0; i < 5; i++)
	{
		printf("%d학년 %d반 = %d명\t", j, i + 1, ar[j - 1][i]);
		sum = sum + ar[j - 1][i];
	}
	printf("\n전체 학생 수 = %d", sum);
}
