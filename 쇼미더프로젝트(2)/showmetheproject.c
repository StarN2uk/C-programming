#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
int i;

void Fileprinter(char score)
{
	FILE *fp = fopen("scoreFile.txt", "w");
	fputc(score, fp);
}

void Theme(i)
{
	printf("###################��¥ PC��###################\n1. �귿 ������(���� -> 5000��, ���̾Ƹ�� -> 10000��, �� -> 0��, �� -> -1000��)\n2. ���� ���� ��(�̱� ���� 1000��)\n3. �ڷ��Ľ� ����\n4. ���� �� Ȯ���ϱ�&���ǰ Ȯ���ϱ�\n5. ���� ���");
	printf("\n����� ���ϴ� ���� = ");
	scanf("%d", &i); 
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

void Rullet();
{
	system("cls");
	srand(time(NULL));
	printf("%d")
	switch(rand())
	{
		case 1:
			printf("")
	}
}






int main()
{
	Fileprinter('0');
	Theme(0);
	GAME(i);
	return 0;
}
