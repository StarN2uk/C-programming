#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *out = fopen("My drink.txt", "w");
	char a[1024], b[1024], c[1024];
	if(out == NULL)
	{
		printf("파일이 없습니다.");
		exit(1);
	}
	
	printf("좋아하는 음료수의 이름과 용량(ml), 가격(원)을 입력하시오.");
	scanf("%s %s %s", &a, &b, &c);
	
	fputs(a, out);
	fputs(b, out);
	fputs(c, out);
	
	return 0;
}
