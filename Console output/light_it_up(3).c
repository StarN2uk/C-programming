#include<stdio.h>
#include<conio.h>
#include<windows.h>

void GotoXY(int x, int y)
{
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main()
{
	int x, y;
	
	do
	{
		GotoXY(0, 0);
		printf("��ǥ : ");
		scanf("%d %d", &x, &y);
		GotoXY(x, y);
		printf("��");
	} while(1);
	
	return 0;
}
