#include<stdio.h>

//C��� ������ ������ Ư�� ������ 
int ReverseNum(int n);

int main()//������Ÿ��
{
	printf("%d�� ������ ���� %d�Դϴ�.", 1234, ReverseNum(1234));
	return 0;
}

int ReverseNum(int n)
{
	int i, j, temp;
	int ReverseNum = 0;
	
	if(n < 10)
	{
		printf("��... ����.");
		return -1;
	}
	
	do
	{
		temp = temp * 10 + n % 10;
		n = (n - n % 10) / 10;
	}while(n > 0);
	return temp;
}
