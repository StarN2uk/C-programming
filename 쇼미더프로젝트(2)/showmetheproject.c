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
	printf("###################��¥ PC��###################\n1. �귿 ������(���� -> 5000��, ���̾Ƹ�� -> 10000��, �� -> 0��, �� -> -1000��)\n2. ���� ���� ��(�̱� ���� 1000��)\n3. �ڷ��Ľ� ����\n4. ���� �� Ȯ���ϱ�&���ǰ Ȯ���ϱ�\n5. ���� ���");
	printf("\n����� ���ϴ� ���� = ");
	scanf("%d", &i); 
}

void Rullet()
{
	system("cls");
	printf("���� ���� ������!!!\n���� �ٷ� �����մϴ�.");
	Sleep(2000);
	srand(time(NULL));
	switch(rand() % 8)
	{
		case 1:
			// ����
			printf("�����մϴ�!!! ������ ��÷�Ǽ̽��ϴ�.");
			money = money + 5000;
			Fileprinter(money);
			break;
		case 2:
			// ���̾Ƹ��
			printf("���� ���� ������?!! ���̾Ƹ�忡 ��÷�Ǽ̾��!!"); 
		case 3:
			//��
			printf("�ƽ��׿�... �ٽ� �� �� ����?"); 
		case 4:
			//��
			printf("�̹� ���� ���� �� ���ҳ�����Ф�"); 
		case 5:
			//���̾Ƹ��
			printf("���� ���� ������?!! ���̾Ƹ�忡 ��÷�Ǽ̾��!!");
		case 6:
			//��
			printf("�ƽ��׿�... �ٽ� �� �� ����?");
		case 7:
			//��
			printf("�̹� ���� ���� �� ���ҳ�����Ф�");
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
