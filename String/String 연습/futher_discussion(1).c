#include<stdio.h>

int main()
{
	char str1;
	
	printf("문자 한 개를 입력하시오 : ");
	scanf("%c", &str1);
	if(str1 < 97)
	{
		str1 = str1 + 32;
		printf("%c", str1);
	}
	else if(str1 >= 97)
	{
		str1 = str1 - 32;
		printf("%c", str1);
	}
	return 0;
}
