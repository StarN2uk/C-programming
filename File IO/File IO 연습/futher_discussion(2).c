#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *in = fopen("SongFile.txt", "r");
	FILE *out = fopen("Copy_SongFile.txt","w");
	if(in == NULL)
	{
		printf("������ �����ϴ�.");
		exit(1);
	}
	while(1){
		char ch = fgetc(in);
		if (ch == EOF) break;
		fputc(ch,out);
		printf("%c",ch);
	}
	return 0;
}
