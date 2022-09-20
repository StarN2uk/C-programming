#include<stdio.h>

int main()
{
	char sentence[80];
	
	puts("문장을 입력하세요 : ");
	gets(sentence);
	puts(sentence);
	printf("%s", sentence); 
	return 0;
}
