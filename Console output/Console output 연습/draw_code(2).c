#include<stdio.h>
#include<windows.h>
#include<conio.h>

int main()
{
	int x, y, i;
	i = 0;
	COORD pos;
	
	while(i < 10)
	{
		pos.X = 40;
		pos.Y = 0 + i * 2;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		printf("%d", (i + 1) * 10);
		i++;
		Sleep(1000);
	}
	return 0;
}
