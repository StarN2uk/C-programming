#include<stdio.h>

int main()
{
	char str1;
	
	printf("���� �� ���� �Է��Ͻÿ� : ");
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
