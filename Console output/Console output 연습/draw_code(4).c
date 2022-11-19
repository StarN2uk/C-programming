#include<stdio.h>
#include<windows.h>
#include<conio.h>

int main()
{
	int x, y, i;
	COORD pos;
	
	for(i = 0; i < 9; i++)
	{
		pos.X = 40;
		pos.Y = 10 - i;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		printf("%d", (9 - i) * 111);
		Sleep(1000);
	}
	return 0;
}
