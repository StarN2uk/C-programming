#include<stdio.h>
#include<stdlib.h>// random ���� �̿��ϱ� ���ؼ�. 
#include<time.h>// "
#include<windows.h>
int sel, allmoney, money, bankmoney, outmoney, inmoney;
char callnumber[100];// ��ȭ��ȣ�� int �� ���� �ʴ´�. �׷��� character�� �̿��ؼ� ���ڸ� �������. 
char message[10000];// ������ ���� �� �ֱ� ������ 10000���� �߽��ϴ�.
// ��� �̿��ϴ��� ���� ��Ʈ 
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
	printf("\t���α׷��� ������ �ʹٸ� 0�� �����ÿ�.\n");
	printf("\t���� 50000���� ������ �� �ֽ��ϴ�.\n");
	printf("************************************************************\n");
}

// case 1
void fishing()
{
	printf("��ȭ��ȣ: %s\n", callnumber);
	printf("�ݾ�: %d", money);
	printf("\n����: %s", message);
}

// case 2
void goods()
{
	printf("���� �ݾ�: %d", allmoney);
}

// case 3
void sends()
{
	printf("\n��ȭ��ȣ: ");
	scanf("%s", callnumber);
	printf("\n��: ");
	scanf("%d", &money);
	if(money > 50000)
	{
		printf("\n��: ");
		scanf("%d", &money);
	}
	printf("\n����: ");
	scanf("%s", &message);
	allmoney = allmoney + money;
	srand(time(NULL));// random �� 
	switch(rand() % 3)
	{
		case 0:
			printf("������ ���� �ʾҽ��ϴ�.");
			break;
		case 1: 
			printf("������ ���� �ʾҽ��ϴ�."); 
			break;
		case 2:
			printf("������ ������ϴ�!");
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
	printf("\n����ִ� ��: %d��\n", bankmoney);
	printf("������ �ݾ���: ");
	scanf("%d", &outmoney);
	if(outmoney > bankmoney)
	{
		printf("������ �� ���� �������� �� �����ϴ�.");
		outmoney = 0;
	}
	bankmoney = bankmoney - outmoney;
	allmoney = allmoney + outmoney;
}

// case 5
void saves()
{
	printf("���� �� �ִ� ��: %d��\n", allmoney);
	printf("���� �ݾ�: ");
	scanf("%d", &inmoney);
	if(inmoney > allmoney)
	{
		printf("������ �� ���� ���� �� �����ϴ�.");
		inmoney = 0;
	}
	allmoney = allmoney - inmoney;
	bankmoney = bankmoney + inmoney;
}

// case 6
void seebankmoney()
{
	printf("\n���� ���࿡ �ִ� �ݾ��� %d���Դϴ�.", bankmoney);
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
				// ���α׷��� �����鼭 ������ ��. 
				printf("����� �������� ö��ö��.");
				return 0;
				break;
			case 1:
				// ��� ���� ���ڸ� �� �� �ִ�. 
				printf("�ǽ� ���ڸ� Ȯ���ϱ� \n");
				fishing();
				break;
			case 2:
				// ���ݱ��� ���� ���� �� �� �ִ�. (�ݰ� ���� �� ����) 
				printf("���� �ܾ� Ȯ���ϱ� \n");
				goods();
				break;
			case 3:
				// �ǽ� ���ڸ� ������ ���� ����. (������ ���߿� ���� ���ѱ� �� �ֽ��ϴ�.)
				printf("�ǽ� ���ڸ� ������ ");
				sends();
				break;
			case 4:
				// �� �ݰ� �ִ� ���� ������ �� �ֽ��ϴ�. 
				printf("�� �� �����ϱ�");
				occounts();
				break;
			case 5:
				// �� �ݰ� ���� �ֽ��ϴ�. 
				printf("�� �� �ֱ�");
				saves();
				break;
			case 6:
				// �� �ݰ� �ִ� �� ����. 
				printf("���࿡ �ִ� �ݾ� ����");
				seebankmoney();
				break; 
			default:
				printf("�ٽ� �Է����ּ���.");
				break; 
		}
		
		// ��� �� �� �ֵ��� Ÿ���� �Ǵ�. 
		Sleep(1500);
		system("cls"); 
	}
	return 0;
}
