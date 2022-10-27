#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *in = fopen("NumberFile.txt", "w");
	FILE *out = fopen("NumberFile.txt", "r");
	char n, m;
	
	if(out == NULL)
	{
		printf("파일 없음\n");
		exit(1);
	}
	
	printf("하나의 대문자를 쓰시오.");
	scanf("%c", &n);
	
	fprintf(stdout, "%c", n);
	
	m = fgetc(in);
	
	fclose(in);
	fclose(out);
	
	return 0;
}
