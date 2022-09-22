#include<stdio.h>

int main()
{
	char str1, str2, str3;
	
	scanf("%c%c%c", &str1, &str2, &str3);
	int num1 = str1 - 48, num2 = str2 - 48, num3 = str3 - 48;
	printf("%d", num1*100 + num2*10 + num3);
	return 0;
}
