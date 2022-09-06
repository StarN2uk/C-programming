#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i, k = 0;
	int arr[10];
	srand(time(NULL));
	for(i = 0; i <= 9; i++)// 배열 값 넣기 & 합계 구하기 
	{
		arr[i] = (rand() % 10);
		printf("arr[%d] = %d\n", i, arr[i]);
		k = k + arr[i];
	}
	printf("합= %d", k);//출력 
	return 0;
}
