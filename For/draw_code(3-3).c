#include<stdio.h>

int main()
{
	float i, n;
	
	printf("�Ǽ� �Է���");
	scanf("%f", &n);
	for(i = 0; i <= n; i = i + 0.3)
	{
		printf("%.1f ", i);
	}
	return 0;
}
