#include<stdio.h>

int main()
{
	float f;
	int num;
	
	printf("1���� ū �Ǽ��� �Է��Ͻÿ�.");
	scanf("%f", &f);
	
	for(f = f; f >= 1; f = f / 2)
	{
		num = num + 1;
	}
	printf("%d", num);
	return 0;
}
