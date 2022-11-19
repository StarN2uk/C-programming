#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
int i;
char score;

void Fileprinter(score)
{
	FILE *fp = fopen("scoreFile.txt", "w");
	fputc(score, fp);
}

void Theme(i)
{
	printf("###################가짜 PC방###################\n1. 룰렛 돌리기(코인 -> 5000원, 다이아몬드 -> 10000원, 꽝 -> 0원, 똥 -> -1000원)\n2. 가위 바위 보(이길 때만 1000원)\n3. 텔레파시 게임\n4. 남은 돈 확인하기&배고품 확인하기\n5. 음식 사기");
	printf("\n당신이 원하는 게임 = ");
	scanf("%d", &i); 
}

void Rullet()
{
	system("cls");
	srand(time(NULL));
	printf("%d");
	switch(rand())
	{
		case 1:
			printf("");
	}
}

void GAME(int j)
{
	system("cls");
	switch(j)
	{
		case 1:
			Rullet();
			break;
		case 2:
			break;
		
	}
}





int main()
{
	Fileprinter('0');
	Theme(0);
	GAME(i);
	return 0;
}
