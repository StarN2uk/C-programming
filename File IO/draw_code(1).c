#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *in = fopen("StringFile.txt", "r");
	char str1[100];
	char str2[100];
	char str3[100];
	
	if(in == NULL)
	{
		printf("파일 없음\n");
		exit(1);
	}
	
	fgets(str1, sizeof(str1)-1, in);
	fgets(str2, sizeof(str2)-1, in);
	fgets(str3, sizeof(str3)-1, in);
	
	puts(str1);
	printf("%s", str2);
	
	fputs(str3, stdout);
	fclose(in);
	
	return 0;
}
