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
void FoodShopping();
void RockScissorsPaper();
void Telepathy();
void OP1();
void OP2();
void OP3();

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
	switch(rand() % 8)
	{
		case 1:
			printf("축하합니다!!! 코인이 당첨되셨습니다. 돈 + 5000원");
			money = money + 5000;
			Fileprinter(money);
			break;
		case 2:
			printf("정말 운이 좋군요?!! 다이아몬드에 당첨되셨어요!! 돈 + 10000원"); 
			money = money + 10000;
			Fileprinter(money);
			break;
		case 3:
			printf("아쉽네요... 다시 한 번 ㄱㄱ? 돈 + 0원");
			Fileprinter(money);
			break;
		case 4:
			printf("이번 판은 운이 안 좋았나봐요ㅠㅠ 돈 - 1000원"); 
			money = money - 1000;
			if(money < 0)
			{
				money = 0;
			}
			Fileprinter(money);
			break;
		case 5:
			printf("축하합니다!!! 코인이 당첨되셨습니다. 돈 + 5000원");
			money = money + 5000;
			Fileprinter(money);
			break;
		case 6:
			printf("아쉽네요... 다시 한 번 ㄱㄱ? 돈 + 0원");
			Fileprinter(money);
			break;
		case 7:
			printf("이번 판은 운이 안 좋았나봐요ㅠㅠ 돈 - 1000원");
			money = money - 1000;
			if(money < 0)
			{
				money = 0;
			}
			Fileprinter(money);
			break;
	}
	Sleep(5000);
	system("cls");
}

void FoodShopping(int menu)
{
	system("cls");
	printf("남은 돈-> %d원\n", money);
	printf("$$$$$$$$$$$$$$$$$$$PC방 음식 메뉴$$$$$$$$$$$$$$$$$$$\n1. 신라면(2000원)\n2. 너구리(2800원)\n3. 복숭아 아이스티(1000원)\n4. 짜파게티(3000원)\n5. 공기밥(500원)\n6. 불닭볶음면(3000원)\n7. 밀키스340ml(1300원)\n8. 썬칩(1500원)\n9. 군만두 6개(2500원)\n10. 김말이튀김 5개(2000원)\n");
	scanf("%d", &menu);
	switch(menu)
	{
		case 1:
			if(money - 2000 < 0)
			{
				printf("죄송하지만 잔액 부족입니다.");
				break; 
			}
			printf("후루룩 짭짭. 음~맛있다. PC방 갔다오셨어요?");
			money = money - 2000;
			Fileprinter(money);
			break;
		case 2:
			if(money - 2800 < 0)
			{
				printf("죄송하지만 잔액 부족입니다.");
				break; 
			}
			printf("후루룩 켁켁..케.. 후추 좀 적당히 넣지 그랬어?");
			money = money - 2800;
			Fileprinter(money);
			break;
		case 3:
			if(money - 1000 < 0)
			{
				printf("죄송하지만 잔액 부족입니다.");
				break; 
			}
			printf("크~ 역시 너무 시원하구, 너무 맛있구.");
			money = money - 1000;
			Fileprinter(money);
			break;
		case 4:
			if(money - 3000 < 0)
			{
				printf("죄송하지만 잔액 부족입니다.");
				break; 
			}
			printf("앗, 뜨거워 앗, 뜨거워 PC의 사랑");
			money = money - 3000;
			Fileprinter(money);
			break;
		case 5:
			if(money - 500 < 0)
			{
				printf("죄송하지만 잔액 부족입니다.");
				break; 
			}
			printf("이 집 맛집 이었어?!!");
			money = money - 500;
			Fileprinter(money);
			break;
		case 6:
			if(money - 3000 < 0)
			{
				printf("죄송하지만 잔액 부족입니다.");
				break; 
			}
			printf("너무 매워!!!!!!!!!!!!!! 근데 맛있다.");
			money = money - 3000;
			Fileprinter(money);
			break;
		case 7:
			if(money - 1300 < 0)
			{
				printf("죄송하지만 잔액 부족입니다.");
				break; 
			}
			printf("크으윽! 다 내려간다 다 내려가!!");
			money = money - 1300;
			Fileprinter(money);
			break;
		case 8:
			if(money - 1500 < 0)
			{
				printf("죄송하지만 잔액 부족입니다.");
				break; 
			}
			printf("와자작 와작. 역시 내가 좋아하는 과자!!");
			money = money - 1500;
			Fileprinter(money);
			break;
		case 9:
			if(money - 2500 < 0)
			{
				printf("죄송하지만 잔액 부족입니다.");
				break; 
			}
			printf("아이 고소해! 아니 뭐야! 비*고 꺼였잖아?!!");
			money = money - 2500;
			Fileprinter(money);
			break;
		case 10:
			if(money - 2000 < 0)
			{
				printf("죄송하지만 잔액 부족입니다.");
				break; 
			}
			printf("바삭, 역시 PC방은 천국이야!!");
			money = money - 2000;
			Fileprinter(money);
			break;
	}
	Sleep(3000);
	system("cls");
}

void RockScissorsPaper(int option)
{
	system("cls");
	printf("##################가위바위보##################\n바위는 1, 가위는 2, 보자기는 3입니다.\n");
	scanf("%d", &option);
	srand(time(NULL));
	switch(rand() % 3 + 1)
	{
		case 1:
			// 주먹
			if(option == 1)
			{
				printf("비겼습니다. 돈 - 500원");
				money = money - 500;
				if(money < 0)
				{
					money = 0;
				}
				Fileprinter(money);
				break;
			}
			else if(option == 2)
			{
				printf("졌습니다.돈 - 1000원");
				money = money - 1000;
				if(money < 0)
				{
					money = 0;
				}
				Fileprinter(money);
				break; 
			} 
			else
			{
				printf("이겼습니다.돈 + 1000원");
				money = money + 1000;
				Fileprinter(money);
				break; 
			} 
		case 2:
			//가위
			if(option == 1)
			{
				printf("이겼습니다. 돈 + 1000원");
				money = money + 1000;
				Fileprinter(money);
				break;
			}
			else if(option == 2)
			{
				printf("비겼습니다.돈 - 500원");
				money = money - 500;
				if(money < 0)
				{
					money = 0;
				}
				Fileprinter(money);
				break; 
			} 
			else
			{
				printf("졌습니다.돈 - 1000원");
				money = money - 1000;
				if(money < 0)
				{
					money = 0;
				}
				Fileprinter(money);
				break; 
			} 
		case 3:
			//보자기
			if(option == 1)
			{
				printf("졌습니다. 돈 - 1000원");
				money = money - 1000;
				if(money < 0)
				{
					money = 0;
				}
				Fileprinter(money);
				break;
			}
			else if(option == 2)
			{
				printf("이겼습니다.돈 + 1000원");
				money = money + 1000;
				Fileprinter(money);
				break; 
			} 
			else
			{
				printf("비겼습니다.돈 - 500원");
				money = money - 500;
				if(money < 0)
				{
					money = 0;
				}
				Fileprinter(money);
				break; 
			}  
	}
	Sleep(3000);
	system("cls");
}

void OP1(int s1)
{
	system("cls"); 
	printf("1. 시금치\n2. 땀냄새\n3. 곤충\n4. 동물\n");
	scanf("%d", &s1);
	srand(time(NULL));
	switch(rand() % 4 + 1)
	{
		case 1:
			if(s1 == 1)
			{
				printf("텔레파시가 통했어요!!!! 돈 + 7000원");
				money = money + 7000;
				Fileprinter(money);
				break; 
			}
			else
			{
				printf("아쉽네요... 빗나갔어요. 돈 - 1000원");
				money = money - 1000;
				if(money < 0)
				{
					money = 0;
				}
				Fileprinter(money);
				break;
			}
		case 2:
			if(s1 == 2)
			{
				printf("텔레파시가 통했어요!!!! 돈 + 7000원");
				money = money + 7000;
				Fileprinter(money);
				break; 
			}
			else
			{
				printf("아쉽네요... 빗나갔어요. 돈 - 1000원");
				money = money - 1000;
				if(money < 0)
				{
					money = 0;
				}
				Fileprinter(money);
				break;
			}
		case 3:
			if(s1 == 3)
			{
				printf("텔레파시가 통했어요!!!! 돈 + 7000원");
				money = money + 7000;
				Fileprinter(money);
				break; 
			}
			else
			{
				printf("아쉽네요... 빗나갔어요. 돈 - 1000원");
				money = money - 1000;
				if(money < 0)
				{
					money = 0;
				}
				Fileprinter(money);
				break;
			}
		case 4:
			if(s1 == 4)
			{
				printf("텔레파시가 통했어요!!!! 돈 + 7000원");
				money = money + 7000;
				Fileprinter(money);
				break; 
			}
			else
			{
				printf("아쉽네요... 빗나갔어요. 돈 - 1000원");
				money = money - 1000;
				if(money < 0)
				{
					money = 0;
				}
				Fileprinter(money);
				break;
			}
	}
}

void OP2(int s2)
{
	system("cls"); 
	printf("1. 농구\n2. 축구\n3. 게임\n4. 유튜브\n");
	scanf("%d", &s2);
	srand(time(NULL));
	switch(rand() % 4 + 1)
	{
		case 1:
			if(s2 == 1)
			{
				printf("텔레파시가 통했어요!!!! 돈 + 7000원");
				money = money + 7000;
				Fileprinter(money);
				break; 
			}
			else
			{
				printf("아쉽네요... 빗나갔어요. 돈 - 1000원");
				money = money - 1000;
				if(money < 0)
				{
					money = 0;
				}
				Fileprinter(money);
				break;
			}
		case 2:
			if(s2 == 2)
			{
				printf("텔레파시가 통했어요!!!! 돈 + 7000원");
				money = money + 7000;
				Fileprinter(money);
				break; 
			}
			else
			{
				printf("아쉽네요... 빗나갔어요. 돈 - 1000원");
				money = money - 1000;
				if(money < 0)
				{
					money = 0;
				}
				Fileprinter(money);
				break;
			}
		case 3:
			if(s2 == 3)
			{
				printf("텔레파시가 통했어요!!!! 돈 + 7000원");
				money = money + 7000;
				Fileprinter(money);
				break; 
			}
			else
			{
				printf("아쉽네요... 빗나갔어요. 돈 - 1000원");
				money = money - 1000;
				if(money < 0)
				{
					money = 0;
				}
				Fileprinter(money);
				break;
			}
		case 4:
			if(s2 == 4)
			{
				printf("텔레파시가 통했어요!!!! 돈 + 7000원");
				money = money + 7000;
				Fileprinter(money);
				break; 
			}
			else
			{
				printf("아쉽네요... 빗나갔어요. 돈 - 1000원");
				money = money - 1000;
				if(money < 0)
				{
					money = 0;
				}
				Fileprinter(money);
				break;
			}
	}
}

void OP3(int s3)
{
	system("cls"); 
	printf("1. 공차기\n2. 달리기\n3. 대화하기\n4. 놀기\n");
	scanf("%d", &s3);
	srand(time(NULL));
	switch(rand() % 4 + 1)
	{
		case 1:
			if(s3 == 1)
			{
				printf("텔레파시가 통했어요!!!! 돈 + 7000원");
				money = money + 7000;
				Fileprinter(money);
				break; 
			}
			else
			{
				printf("아쉽네요... 빗나갔어요. 돈 - 1000원");
				money = money - 1000;
				if(money < 0)
				{
					money = 0;
				}
				Fileprinter(money);
				break;
			}
		case 2:
			if(s3 == 2)
			{
				printf("텔레파시가 통했어요!!!! 돈 + 7000원");
				money = money + 7000;
				Fileprinter(money);
				break; 
			}
			else
			{
				printf("아쉽네요... 빗나갔어요. 돈 - 1000원");
				money = money - 1000;
				if(money < 0)
				{
					money = 0;
				}
				Fileprinter(money);
				break;
			}
		case 3:
			if(s3 == 3)
			{
				printf("텔레파시가 통했어요!!!! 돈 + 7000원");
				money = money + 7000;
				Fileprinter(money);
				break; 
			}
			else
			{
				printf("아쉽네요... 빗나갔어요. 돈 - 1000원");
				money = money - 1000;
				if(money < 0)
				{
					money = 0;
				}
				Fileprinter(money);
				break;
			}
		case 4:
			if(s3 == 4)
			{
				printf("텔레파시가 통했어요!!!! 돈 + 7000원");
				money = money + 7000;
				Fileprinter(money);
				break; 
			}
			else
			{
				printf("아쉽네요... 빗나갔어요. 돈 - 1000원");
				money = money - 1000;
				if(money < 0)
				{
					money = 0;
				}
				Fileprinter(money);
				break;
			}
	}
}

void Telepathy(int tele)
{
	printf("@@@@@@@@@@@@@@@@@텔레파시 게임@@@@@@@@@@@@@@@@@\n1. 싫어하는 것\n2. 좋아하는 것\n3. 잘하는 것\n");
	scanf("%d", &tele);
	switch(tele)
	{
		case 1:
			OP1(0);
			break;
		case 2:
			OP2(0);
			break;
		case 3:
			OP3(0);
			break;
	}
	Sleep(3000);
	system("cls"); 
}

void GAME(int c)
{
	system("cls");
	switch(c)
	{
		case 1:
			Rullet();
			break;
		case 2:
			RockScissorsPaper(0);
			break;
		case 3:
			Telepathy(0);
			break;
		case 4:
			FoodShopping(0);
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
	printf("###################가짜 PC방###################\n1. 룰렛 돌리기(코인 -> 5000원, 다이아몬드 -> 10000원, 꽝 -> 0원, 똥 -> -1000원)\n2. 가위 바위 보(이기면 1000원, 지면 -1000원, 비기면 - 500원)\n3. 텔레파시 게임(통하면 7000원, 빗나가면 -1000원)\n4. 음식 사기");
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
