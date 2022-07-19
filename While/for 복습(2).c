#include<stdio.h> 

int main()
{
	int a, i;
	a = 0;
	
	for(i = 80; i > 1; i = i / 2)
	{
		a = a + i;
	}
	printf("%d", a);
	return 0;
}
