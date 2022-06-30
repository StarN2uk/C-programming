#include<stdio.h>

int main()
{
	int a,b;
	//저번 달 
	a = 250;
	b = 200;
	
	//이번 달 
	b = b + 100;
	
	printf("%d", b - a > 60);
	
	return 0;
}
