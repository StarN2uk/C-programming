#include<stdio.h>

int main()
{
	int sum, a, b, c, d, n;
	sum = 0;
	printf("����� ����, ����, ����, ���� ���� ������ ���ÿ�.");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	sum = a + b + c + d;
	n = (a + b + c + d) / 4;
	
	switch(n / 10)
	{
		case 10 :
			printf("�� ���߾��.");
			break;
		case 9 :
			printf("�� ���߾��.");
			break;
		case 8 :
			printf("���߾��.");
			break;
		case 7 :
			printf("ȭ����.");
			break;
		case 6 :
			printf("������, �� �� �־��.");
			break;
		case 5 :
			printf("������, �� �� �־��.");
			break;
		case 4 :
			printf("������, �� �� �־��.");
			break;
		case 3 :
			printf("������, �� �� �־��.");
			break;
		case 2 :
			printf("������, �� �� �־��.");
			break;
		case 1 :
			printf("������, �� �� �־��.");
			break;
		case 0 :
			printf("������, �� �� �־��."); 
	}
	return 0;
}
