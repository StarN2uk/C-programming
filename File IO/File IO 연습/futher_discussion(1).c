#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *in = fopen("NumberFile.txt", "w");
	FILE *out = fopen("NumberFile.txt", "r");
	char n, m;
	
	if(out == NULL)
	{
		printf("���� ����\n");
		exit(1);
	}
	
	printf("�ϳ��� �빮�ڸ� ���ÿ�.");
	scanf("%c", &n);
	
	fprintf(stdout, "%c", n);
	
	m = fgetc(in);
	
	fclose(in);
	fclose(out);
	
	return 0;
}
