#include<stdio.h>
#include<stdlib.h>// random 값을 이용하기 위해서. 
#include<time.h>// "
#include<windows.h>
int sel, allmoney, money, bankmoney, outmoney, inmoney;
char callnumber[100];// 전화번호는 int 로 되지 않는다. 그래서 character를 이용해서 문자를 만들었다. 
char message[10000];// 내용은 많을 수 있기 때문에 10000으로 했습니다.
// 어떻게 이용하는지 설명 파트 
void MenuPrint()
{
	printf("************************************************************\n");
	printf("\tfishing Message sender");
	printf("\tselect ( 1 ~ 6 ) \n");
	printf("\t1. message view \n");
	printf("\t2. Account view \n");
	printf("\t3. message send \n");
	printf("\t4. ABCbank withdraw \n");
	printf("\t5. ABCbank save \n");
	printf("\t6. see bank money\n");
	printf("\t프로그램을 끝내고 싶다면 0을 적으시오.\n");
	printf("\t돈은 50000까지 가져갈 수 있습니다.\n");
	printf("************************************************************\n");
}

// case 1
void fishing()
{
	printf("전화번호: %s\n", callnumber);
	printf("금액: %d", money);
	printf("\n내용: %s", message);
}

// case 2
void goods()
{
	printf("현재 금액: %d", allmoney);
}

// case 3
void sends()
{
	printf("\n전화번호: ");
	scanf("%s", callnumber);
	printf("\n얼마: ");
	scanf("%d", &money);
	if(money > 50000)
	{
		printf("\n얼마: ");
		scanf("%d", &money);
	}
	printf("\n내용: ");
	scanf("%s", &message);
	allmoney = allmoney + money;
	srand(time(NULL));// random 값 
	switch(rand() % 3)
	{
		case 0:
			printf("도둑이 들지 않았습니다.");
			break;
		case 1: 
			printf("도둑이 들지 않았습니다."); 
			break;
		case 2:
			printf("도둑이 들었습니다!");
			if(allmoney >= 50000)
			{
				allmoney = allmoney - 50000;
			}
			else
			{
				allmoney = 0;
			}
			break;
	}
}

// case 4
void occounts()
{
	printf("\n들어있는 돈: %d원\n", bankmoney);
	printf("가져갈 금액은: ");
	scanf("%d", &outmoney);
	if(outmoney > bankmoney)
	{
		printf("지금은 이 돈을 가져가실 수 없습니다.");
		outmoney = 0;
	}
	bankmoney = bankmoney - outmoney;
	allmoney = allmoney + outmoney;
}

// case 5
void saves()
{
	printf("넣을 수 있는 돈: %d원\n", allmoney);
	printf("넣을 금액: ");
	scanf("%d", &inmoney);
	if(inmoney > allmoney)
	{
		printf("지금은 이 돈을 넣을 수 없습니다.");
		inmoney = 0;
	}
	allmoney = allmoney - inmoney;
	bankmoney = bankmoney + inmoney;
}

// case 6
void seebankmoney()
{
	printf("\n현재 은행에 있는 금액은 %d원입니다.", bankmoney);
}

int main()
{
	//int sel, callnumber, allmoney, money;
	allmoney = 0;
	bankmoney = 0;
	outmoney = 0;
	inmoney = 0;
	while(1)
	{
		MenuPrint();
	
		printf("selcet value : ");
		scanf("%d", &sel);
		switch(sel)
		{
			case 0:
				// 프로그램이 끝나면서 감옥에 감. 
				printf("당신은 감옥으로 철컹철컹.");
				return 0;
				break;
			case 1:
				// 방금 보낸 문자를 볼 수 있다. 
				printf("피싱 문자를 확인하기 \n");
				fishing();
				break;
			case 2:
				// 지금까지 모은 돈을 알 수 있다. (금고에 넣은 돈 빼고) 
				printf("계좌 잔액 확인하기 \n");
				goods();
				break;
			case 3:
				// 피싱 문자를 보내서 돈을 번다. (보내는 도중에 돈을 빼앗길 수 있습니다.)
				printf("피싱 문자를 보내기 ");
				sends();
				break;
			case 4:
				// 내 금고에 있는 돈을 가져갈 수 있습니다. 
				printf("내 돈 대출하기");
				occounts();
				break;
			case 5:
				// 내 금고에 돈을 넣습니다. 
				printf("내 돈 넣기");
				saves();
				break;
			case 6:
				// 내 금고에 있는 돈 보기. 
				printf("은행에 있는 금액 보기");
				seebankmoney();
				break; 
			default:
				printf("다시 입력해주세요.");
				break; 
		}
		
		// 잠시 볼 수 있도록 타임을 건다. 
		Sleep(1500);
		system("cls"); 
	}
	return 0;
}
