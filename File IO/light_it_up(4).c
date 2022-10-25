#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *out = fopen("StringFile.txt", "w");
	char str1[] = "Hello C3Coding";
	char str2[] = "안녕하세요 씨큐브코딩입니다.\n";
	
	if(out == NULL)
	{
		printf("파일없음\n");
		exit(1);
	}
	
	fputs("문자열을 출력합니다\n", out);
	fputs(str1, out);
	fputs("\n", out);
	fputs(str2, out);
	
	fclose(out);
	
	return 0;
}
