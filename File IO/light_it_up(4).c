#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *out = fopen("StringFile.txt", "w");
	char str1[] = "Hello C3Coding";
	char str2[] = "�ȳ��ϼ��� ��ť���ڵ��Դϴ�.\n";
	
	if(out == NULL)
	{
		printf("���Ͼ���\n");
		exit(1);
	}
	
	fputs("���ڿ��� ����մϴ�\n", out);
	fputs(str1, out);
	fputs("\n", out);
	fputs(str2, out);
	
	fclose(out);
	
	return 0;
}
