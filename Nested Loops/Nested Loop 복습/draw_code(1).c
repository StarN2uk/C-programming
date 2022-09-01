#include<stdio.h>

int main()
{
	int i, sall, ball;
	sall = 0;
	ball = 0;
	
	for(i = 1; i <= 10; i++)
	{
		sall = sall + i;
		ball = ball + sall;
	}
	printf("%d", ball);
	return 0;
}
