#include<stdio.h>

int main()
{
	char str1, str2, str3, str4, str5;
	
	scanf("%c%c%c%c%c", &str1, &str2, &str3, &str4, &str5);
	float num1 = str1 - 48, num3 = str3 - 48, num4 = str4 - 48, num5 = str5 - 48;
	float f = (num1 * 1000 + num3 * 100 + num4 * 10 + num5) / 1000;
	printf("%f", f);

	return 0;
}
