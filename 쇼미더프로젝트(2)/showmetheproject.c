#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
int i;
char money;

void Fileprinter(money)
{
	FILE *fp = fopen("scoreFile.txt", "w");
	fputc(money, fp);
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
	printf("돌려 돌려 돌림판!!!\n지금 바로 시작합니다.");
	Sleep(2000);
	srand(time(NULL));
	switch(rand() % 8)
	{
		case 1:
			// 코인
			printf("축하합니다!!! 코인이 당첨되셨습니다.");
			money = money + 5000;
			Fileprinter(money);
			break;
		case 2:
			// 다이아몬드
			printf("정말 운이 좋군요?!! 다이아몬드에 당첨되셨어요!!"); 
		case 3:
			//꽝
			printf("아쉽네요... 다시 한 번 ㄱㄱ?"); 
		case 4:
			//똥
			printf("이번 판은 운이 안 좋았나봐요ㅠㅠ"); 
		case 5:
			//다이아몬드
			printf("정말 운이 좋군요?!! 다이아몬드에 당첨되셨어요!!");
		case 6:
			//꽝
			printf("아쉽네요... 다시 한 번 ㄱㄱ?");
		case 7:
			//똥
			printf("이번 판은 운이 안 좋았나봐요ㅠㅠ");
	}
}

void GAME(int j)
{
	system("cls");
	switch(j)
	{
		case 0:
			Rullet();
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
