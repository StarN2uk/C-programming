#include<stdio.h>

int main()
{
	int i, arr[5], sum = 0;
	for(i = 0; i < 5; i++)
	{
		printf("%d��° ������ = ", i + 1);
		scanf("%d", &arr[i]);
		sum = sum + arr[i];
	}
	printf("�� = %d", sum);
	return 0;
}
