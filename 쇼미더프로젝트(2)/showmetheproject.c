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
	srand(time(NULL));
	switch(rand() % 8)
	{
		case 1:
			// ����
			printf("�����մϴ�!!! ������ ��÷�Ǽ̽��ϴ�. �� + 5000��");
			money = money + 5000;
			Fileprinter(money);
			break;
		case 2:
			// ���̾Ƹ��
			printf("���� ���� ������?!! ���̾Ƹ�忡 ��÷�Ǽ̾��!! �� + 10000��"); 
			money = money + 10000;
			Fileprinter(money);
			break;
		case 3:
			//��
			printf("�ƽ��׿�... �ٽ� �� �� ����? �� + 0��");
			Fileprinter(money);
			break;
		case 4:
			//��
			printf("�̹� ���� ���� �� ���ҳ�����Ф� �� - 1000��"); 
			money = money - 1000;
			Fileprinter(money);
			break;
		case 5:
			// ����
			printf("�����մϴ�!!! ������ ��÷�Ǽ̽��ϴ�. �� + 5000��");
			money = money + 5000;
			Fileprinter(money);
			break;
		case 6:
			//��
			printf("�ƽ��׿�... �ٽ� �� �� ����? �� + 0��");
			Fileprinter(money);
			break;
		case 7:
			//��
			printf("�̹� ���� ���� �� ���ҳ�����Ф� �� - 1000��"); 
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
	printf("���� ��-> %d��", money);
	Sleep(3000);
	system("cls");
}

void FoodShopping()
{
	system("cls");
	printf("$$$$$$$$$$$$$$$$$$$PC�� ���� �޴�$$$$$$$$$$$$$$$$$$$\n1. �Ŷ��(2000��)\n2. �ʱ���(2800��)\n3. ������ ���̽�Ƽ(1000��)\n4. ¥�İ�Ƽ(3000��)\n");
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
	printf("###################��¥ PC��###################\n1. �귿 ������(���� -> 5000��, ���̾Ƹ�� -> 10000��, �� -> 0��, �� -> -1000��)\n2. ���� ���� ��(�̱�� 1000��, ���� -1000��, ���� - 500��)\n3. �ڷ��Ľ� ����(���ϸ� 1000��, �������� -1000��)\n4. ���� �� Ȯ���ϱ�\n5. ���� ���");
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
