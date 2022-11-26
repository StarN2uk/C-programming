#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
int money = 0;
void STD_OUPUT();
void Theme();
void Fileprinter(int money);
void GAME(int c);
void Rullet();
void LastMoney();
void FoodShopping();

void Rullet()
{
	system("cls");
	printf("돌려 돌려 돌림판!!!\n지금 바로 시작합니다.\n");
	Sleep(1000);
	STD_OUPUT();
	printf("3!\n");
	Sleep(1000);
	STD_OUPUT();
	printf("2!\n");
	Sleep(1000);
	STD_OUPUT();
	printf("1!\n");
	Sleep(1000);
	srand(time(NULL));
	switch(rand() % 8)
	{
		case 1:
			// 코인
			printf("축하합니다!!! 코인이 당첨되셨습니다. 돈 + 5000원");
			money = money + 5000;
			Fileprinter(money);
			break;
		case 2:
			// 다이아몬드
			printf("정말 운이 좋군요?!! 다이아몬드에 당첨되셨어요!! 돈 + 10000원"); 
			money = money + 10000;
			Fileprinter(money);
			break;
		case 3:
			//꽝
			printf("아쉽네요... 다시 한 번 ㄱㄱ? 돈 + 0원");
			Fileprinter(money);
			break;
		case 4:
			//똥
			printf("이번 판은 운이 안 좋았나봐요ㅠㅠ 돈 - 1000원"); 
			money = money - 1000;
			Fileprinter(money);
			break;
		case 5:
			// 코인
			printf("축하합니다!!! 코인이 당첨되셨습니다. 돈 + 5000원");
			money = money + 5000;
			Fileprinter(money);
			break;
		case 6:
			//꽝
			printf("아쉽네요... 다시 한 번 ㄱㄱ? 돈 + 0원");
			Fileprinter(money);
			break;
		case 7:
			//똥
			printf("이번 판은 운이 안 좋았나봐요ㅠㅠ 돈 - 1000원"); 
			money = money - 1000;
			Fileprinter(money);
			break;
	}
	Sleep(5000);
	system("cls");
}

void LastMoney()
{
	system("cls");
	printf("남은 돈-> %d원", money);
	Sleep(3000);
	system("cls");
}

void FoodShopping()
{
	system("cls");
	printf("$$$$$$$$$$$$$$$$$$$PC방 음식 메뉴$$$$$$$$$$$$$$$$$$$\n1. 신라면(2000원)\n2. 너구리(2800원)\n3. 복숭아 아이스티(1000원)\n4. 짜파게티(3000원)\n");
}

void GAME(int c)
{
	system("cls");
	switch(c)
	{
		case 1:
			Rullet();
			break;
		case 4:
			LastMoney();
			break;
		case 5:
			FoodShopping();
			break;
	}
}

void Fileprinter(int money)
{
	FILE *fp = fopen("scoreFile.txt", "w");
	fprintf(fp, "%d", money);
	fclose(fp);
}

void Theme()
{
	int i;
	printf("###################가짜 PC방###################\n1. 룰렛 돌리기(코인 -> 5000원, 다이아몬드 -> 10000원, 꽝 -> 0원, 똥 -> -1000원)\n2. 가위 바위 보(이기면 1000원, 지면 -1000원, 비기면 - 500원)\n3. 텔레파시 게임(통하면 1000원, 빗나가면 -1000원)\n4. 남은 돈 확인하기\n5. 음식 사기");
	printf("\n당신이 원하는 게임 = ");
	scanf("%d", &i);
	GAME(i);
}

void STD_OUPUT()
{
	int x, y;
	COORD pos;
	int i = 0;
	do
	{
		srand(time(NULL));
		pos.X = rand() % 20;
		pos.Y = rand() % 30;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	} while(i != 0);
}





int main()
{
	Fileprinter(0);
	while(1)
	{
		Theme();
	}
	return 0;
}
