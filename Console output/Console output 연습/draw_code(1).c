#include<stdio.h>
#include<windows.h>
#include<conio.h>

int main()
{
	int x, y, i;
	COORD pos;
	for(i = 0; i < 10; i++)
	{
		pos.X = 20 + i * 3;
		pos.Y = 4;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		printf("%d", (i + 1) * 10);
		Sleep(1000);
	}
	return 0;
}
