#include<stdio.h>

int main()
{
	float num;
	
	printf("�Ǽ��� �Է��Ͻÿ�.");
	scanf("%f", &num);
	
	if(num-(int)num >= 0.5)
	{
		num = num - (num - (int)num) + 1;
	}
	else
	{
		num = num - (num - (int)num);
	}
	printf("%.0f", num);
	return 0;
}
