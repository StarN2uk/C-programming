#include<stdio.h>

int input( );

int main( )
{
	int n, m, temp;
	
	n = input();
	m = input();
	printf("Before : ");
	printf("n = %d m = %d\n", n, m);
	temp = n;
	n = m;
	m = temp;
	printf("After : ");
	printf("n = %d m = %d\n", n, m);
	return 0;
}

int input()
{
	int a;
	
	printf("���� �Է�: ");
	scanf("%d", &a); 
	return a;
}
