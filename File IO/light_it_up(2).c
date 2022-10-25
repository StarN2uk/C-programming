#include<stdio.h>

int main()
{
	FILE *fp;
	
	fp = fopen("CharOut.txt", "w");
	
	if(fp == NULL)
	{
		printf("파일 없음\n");
		exit(1);
	}
	
	fputc('A', fp);
	fputc('S', fp);
	fputc('\n', fp);
	fputc(97, fp);
	fputc(98, fp);
	
	fclose(fp);
	
	return 0;
}
