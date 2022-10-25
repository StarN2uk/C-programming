#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp = fopen("datafile.txt", "w");
	
	if(fp == NULL)
	{
		printf("파일이 없습니다.");
		exit(1);
	}
	
	fclose(fp);
	
	return 0;
}
