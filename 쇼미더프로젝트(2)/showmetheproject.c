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
	printf("���� ���� ������!!!\n���� �ٷ� �����մϴ�.\n");
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
			printf("�����մϴ�!!! ������ ��÷�Ǽ̽��ϴ�. �� + 5000��");
			money = money + 5000;
			Fileprinter(money);
			break;
		case 2:
			printf("���� ���� ������?!! ���̾Ƹ�忡 ��÷�Ǽ̾��!! �� + 10000��"); 
			money = money + 10000;
			Fileprinter(money);
			break;
		case 3:
			printf("�ƽ��׿�... �ٽ� �� �� ����? �� + 0��");
			Fileprinter(money);
			break;
		case 4:
			printf("�̹� ���� ���� �� ���ҳ�����Ф� �� - 1000��"); 
			money = money - 1000;
			if(money < 0)
			{
				money = 0;
			}
			Fileprinter(money);
			break;
		case 5:
			printf("�����մϴ�!!! ������ ��÷�Ǽ̽��ϴ�. �� + 5000��");
			money = money + 5000;
			Fileprinter(money);
			break;
		case 6:
			printf("�ƽ��׿�... �ٽ� �� �� ����? �� + 0��");
			Fileprinter(money);
			break;
		case 7:
			printf("�̹� ���� ���� �� ���ҳ�����Ф� �� - 1000��");
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
	printf("���� ��-> %d��\n", money);
	printf("$$$$$$$$$$$$$$$$$$$PC�� ���� �޴�$$$$$$$$$$$$$$$$$$$\n1. �Ŷ��(2000��)\n2. �ʱ���(2800��)\n3. ������ ���̽�Ƽ(1000��)\n4. ¥�İ�Ƽ(3000��)\n5. �����(500��)\n6. �Ҵߺ�����(3000��)\n7. ��Ű��340ml(1300��)\n8. ��Ĩ(1500��)\n9. ������ 6��(2500��)\n10. �踻��Ƣ�� 5��(2000��)\n");
	scanf("%d", &menu);
	switch(menu)
	{
		case 1:
			if(money - 2000 < 0)
			{
				printf("�˼������� �ܾ� �����Դϴ�.");
				break; 
			}
			printf("�ķ�� ¬¬. ��~���ִ�. PC�� ���ٿ��̾��?");
			money = money - 2000;
			Fileprinter(money);
			break;
		case 2:
			if(money - 2800 < 0)
			{
				printf("�˼������� �ܾ� �����Դϴ�.");
				break; 
			}
			printf("�ķ�� ����..��.. ���� �� ������ ���� �׷���?");
			money = money - 2800;
			Fileprinter(money);
			break;
		case 3:
			if(money - 1000 < 0)
			{
				printf("�˼������� �ܾ� �����Դϴ�.");
				break; 
			}
			printf("ũ~ ���� �ʹ� �ÿ��ϱ�, �ʹ� ���ֱ�.");
			money = money - 1000;
			Fileprinter(money);
			break;
		case 4:
			if(money - 3000 < 0)
			{
				printf("�˼������� �ܾ� �����Դϴ�.");
				break; 
			}
			printf("��, �߰ſ� ��, �߰ſ� PC�� ���");
			money = money - 3000;
			Fileprinter(money);
			break;
		case 5:
			if(money - 500 < 0)
			{
				printf("�˼������� �ܾ� �����Դϴ�.");
				break; 
			}
			printf("�� �� ���� �̾���?!!");
			money = money - 500;
			Fileprinter(money);
			break;
		case 6:
			if(money - 3000 < 0)
			{
				printf("�˼������� �ܾ� �����Դϴ�.");
				break; 
			}
			printf("�ʹ� �ſ�!!!!!!!!!!!!!! �ٵ� ���ִ�.");
			money = money - 3000;
			Fileprinter(money);
			break;
		case 7:
			if(money - 1300 < 0)
			{
				printf("�˼������� �ܾ� �����Դϴ�.");
				break; 
			}
			printf("ũ����! �� �������� �� ������!!");
			money = money - 1300;
			Fileprinter(money);
			break;
		case 8:
			if(money - 1500 < 0)
			{
				printf("�˼������� �ܾ� �����Դϴ�.");
				break; 
			}
			printf("������ ����. ���� ���� �����ϴ� ����!!");
			money = money - 1500;
			Fileprinter(money);
			break;
		case 9:
			if(money - 2500 < 0)
			{
				printf("�˼������� �ܾ� �����Դϴ�.");
				break; 
			}
			printf("���� �����! �ƴ� ����! ��*�� �����ݾ�?!!");
			money = money - 2500;
			Fileprinter(money);
			break;
		case 10:
			if(money - 2000 < 0)
			{
				printf("�˼������� �ܾ� �����Դϴ�.");
				break; 
			}
			printf("�ٻ�, ���� PC���� õ���̾�!!");
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
	printf("##################����������##################\n������ 1, ������ 2, ���ڱ�� 3�Դϴ�.\n");
	scanf("%d", &option);
	srand(time(NULL));
	switch(rand() % 3 + 1)
	{
		case 1:
			// �ָ�
			if(option == 1)
			{
				printf("�����ϴ�. �� - 500��");
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
				printf("�����ϴ�.�� - 1000��");
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
				printf("�̰���ϴ�.�� + 1000��");
				money = money + 1000;
				Fileprinter(money);
				break; 
			} 
		case 2:
			//����
			if(option == 1)
			{
				printf("�̰���ϴ�. �� + 1000��");
				money = money + 1000;
				Fileprinter(money);
				break;
			}
			else if(option == 2)
			{
				printf("�����ϴ�.�� - 500��");
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
				printf("�����ϴ�.�� - 1000��");
				money = money - 1000;
				if(money < 0)
				{
					money = 0;
				}
				Fileprinter(money);
				break; 
			} 
		case 3:
			//���ڱ�
			if(option == 1)
			{
				printf("�����ϴ�. �� - 1000��");
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
				printf("�̰���ϴ�.�� + 1000��");
				money = money + 1000;
				Fileprinter(money);
				break; 
			} 
			else
			{
				printf("�����ϴ�.�� - 500��");
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
	printf("1. �ñ�ġ\n2. ������\n3. ����\n4. ����\n");
	scanf("%d", &s1);
	srand(time(NULL));
	switch(rand() % 4 + 1)
	{
		case 1:
			if(s1 == 1)
			{
				printf("�ڷ��Ľð� ���߾��!!!! �� + 7000��");
				money = money + 7000;
				Fileprinter(money);
				break; 
			}
			else
			{
				printf("�ƽ��׿�... ���������. �� - 1000��");
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
				printf("�ڷ��Ľð� ���߾��!!!! �� + 7000��");
				money = money + 7000;
				Fileprinter(money);
				break; 
			}
			else
			{
				printf("�ƽ��׿�... ���������. �� - 1000��");
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
				printf("�ڷ��Ľð� ���߾��!!!! �� + 7000��");
				money = money + 7000;
				Fileprinter(money);
				break; 
			}
			else
			{
				printf("�ƽ��׿�... ���������. �� - 1000��");
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
				printf("�ڷ��Ľð� ���߾��!!!! �� + 7000��");
				money = money + 7000;
				Fileprinter(money);
				break; 
			}
			else
			{
				printf("�ƽ��׿�... ���������. �� - 1000��");
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
	printf("1. ��\n2. �౸\n3. ����\n4. ��Ʃ��\n");
	scanf("%d", &s2);
	srand(time(NULL));
	switch(rand() % 4 + 1)
	{
		case 1:
			if(s2 == 1)
			{
				printf("�ڷ��Ľð� ���߾��!!!! �� + 7000��");
				money = money + 7000;
				Fileprinter(money);
				break; 
			}
			else
			{
				printf("�ƽ��׿�... ���������. �� - 1000��");
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
				printf("�ڷ��Ľð� ���߾��!!!! �� + 7000��");
				money = money + 7000;
				Fileprinter(money);
				break; 
			}
			else
			{
				printf("�ƽ��׿�... ���������. �� - 1000��");
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
				printf("�ڷ��Ľð� ���߾��!!!! �� + 7000��");
				money = money + 7000;
				Fileprinter(money);
				break; 
			}
			else
			{
				printf("�ƽ��׿�... ���������. �� - 1000��");
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
				printf("�ڷ��Ľð� ���߾��!!!! �� + 7000��");
				money = money + 7000;
				Fileprinter(money);
				break; 
			}
			else
			{
				printf("�ƽ��׿�... ���������. �� - 1000��");
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
	printf("1. ������\n2. �޸���\n3. ��ȭ�ϱ�\n4. ���\n");
	scanf("%d", &s3);
	srand(time(NULL));
	switch(rand() % 4 + 1)
	{
		case 1:
			if(s3 == 1)
			{
				printf("�ڷ��Ľð� ���߾��!!!! �� + 7000��");
				money = money + 7000;
				Fileprinter(money);
				break; 
			}
			else
			{
				printf("�ƽ��׿�... ���������. �� - 1000��");
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
				printf("�ڷ��Ľð� ���߾��!!!! �� + 7000��");
				money = money + 7000;
				Fileprinter(money);
				break; 
			}
			else
			{
				printf("�ƽ��׿�... ���������. �� - 1000��");
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
				printf("�ڷ��Ľð� ���߾��!!!! �� + 7000��");
				money = money + 7000;
				Fileprinter(money);
				break; 
			}
			else
			{
				printf("�ƽ��׿�... ���������. �� - 1000��");
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
				printf("�ڷ��Ľð� ���߾��!!!! �� + 7000��");
				money = money + 7000;
				Fileprinter(money);
				break; 
			}
			else
			{
				printf("�ƽ��׿�... ���������. �� - 1000��");
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
	printf("@@@@@@@@@@@@@@@@@�ڷ��Ľ� ����@@@@@@@@@@@@@@@@@\n1. �Ⱦ��ϴ� ��\n2. �����ϴ� ��\n3. ���ϴ� ��\n");
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
	printf("###################��¥ PC��###################\n1. �귿 ������(���� -> 5000��, ���̾Ƹ�� -> 10000��, �� -> 0��, �� -> -1000��)\n2. ���� ���� ��(�̱�� 1000��, ���� -1000��, ���� - 500��)\n3. �ڷ��Ľ� ����(���ϸ� 7000��, �������� -1000��)\n4. ���� ���");
	printf("\n����� ���ϴ� ���� = ");
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
