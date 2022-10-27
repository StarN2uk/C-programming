#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *out = fopen("DivisorFile.txt", "w");
	int i, j, n, m;
	n = 0;
	m = 0;
	if(out == NULL)
	{
		printf("파일이 없습니다.");
		exit(1);
	}
	
	printf("자연수를 입력하세요.");
	scanf("%d", &j);
	fprintf(out, "%d 의 약수는 ", j);
	for(i = 1; i < j; i++)
	{
		if(j % i == 0)
		{
			fprintf(out, "%d ", i);
			n++;
			m = m + i;
		}
	}
	fprintf(out , "\n");
	fprintf(out , "%d", n);
	fprintf(out , "\n");
	fprintf(out , "%d", m);
	return 0;
}
