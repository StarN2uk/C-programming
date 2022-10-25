#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *out = fopen("NumberFile.txt", "w");
	int n, m;
	double d1, d2;
	
	if(out == NULL)
	{
		printf("파일 없음\n");
		exit(1);
	}
	
	printf("정수를 두 개 입력하세요: ");
	scanf("%d %d", &n, &m);
	printf("실수를 두 개 입력하세요: ");
	scanf("%lf %lf", &d1, &d2);
	
	printf("\n\n\n입력 받은 수들은 모두 출력되었습니다.\n");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>");
	printf("왜 콘솔에서 찾으세요?");
	
	fprintf(stdout, "%d %d\n", n, m);
	fprintf(stdout, "%.1lf %.1lf", d1, d2);
	
	fclose(out);
	 
	return 0;
}
