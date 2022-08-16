#include<stdio.h>

//C언어 순차적 절차적 특성 때문에 
int ReverseNum(int n);

int main()//프로토타입
{
	printf("%d를 뒤집은 수는 %d입니다.", 1234, ReverseNum(1234));
	return 0;
}

int ReverseNum(int n)
{
	int i, j, temp;
	int ReverseNum = 0;
	
	if(n < 10)
	{
		printf("음... 빠이.");
		return -1;
	}
	
	do
	{
		temp = temp * 10 + n % 10;
		n = (n - n % 10) / 10;
	}while(n > 0);
	return temp;
}
