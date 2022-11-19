#include<stdio.h>
#include<windows.h>
#include<conio.h>

int main()
{
	int x, y, i;
	i = 0;
	COORD pos;
	
	do
	{
		pos.X = 40 - i * 4;
		pos.Y = 0;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		printf("%d", (9 - i) * 111);
		i++;
		Sleep(1000);
	}while(i < 9);
	return 0;
}
