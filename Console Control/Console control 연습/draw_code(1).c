#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define X_END 79
#define Y_END 24 

void GotoXY(int x, int y);
void Move_LeftRight_Key(char chr, int *x, int *y);

void main()
{
	char key;
	int x = 0; int y = 0;
	
	do
	{
		system("cls");
		GotoXY(x, y);
		printf("@");
		key = getch();
		//printf("Key : %d",key);
		Move_LeftRight_Key(key, &x, &y);
	}while(key != 27);
}



void GotoXY(int x, int y)
{
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void Move_LeftRight_Key(char key, int *x1, int *y1)
{

	switch(key)
	{
		case 75:
			(*x1) -= 1;
			if(*x1 < 1) *x1 = X_END;
			break;
		case 77:
			(*x1) += 1;
			if(*x1 > X_END) *x1 = 1;
			break;
		default :
			(*y1) += 1;
			if(*y1 > X_END) *y1 = 1;
	}

}
