#include<stdio.h>

int main()
{
	float num1;
	
	printf("�Ǽ�(����&���)�� �Է��Ͻÿ�.");
	scanf("%f", &num1);
	
	if(num1 >= 0)
	{
		printf("%.1f", num1);
	}
	else
	{
		printf("%.1f", num1 * -1);
	}
	return 0;
}
