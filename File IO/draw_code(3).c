#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *in = fopen("NumberFile.txt", "r");
	int n, m;
	double d1, d2;
	
	if(in == NULL)
	{
		printf("���� ����\n");
		exit(1);
	}
	
	printf("������ �ΰ� �Է��մϴ�\n");
	fscanf(stdin, "%d %d", &n, &m);
	printf("�Ǽ��� �ΰ� �Է��մϴ�\n");
	fscanf(stdin, "%lf %lf", &d1, &d2);
	
	printf("\n�Է� ���� ������ ��� ����մϴ�.\n");
	printf("%d %d\n", n, m);
	printf("%.1lf %.1lf\n", d1, d2);
	printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>\n");
	printf("��� �Է� �޾������?\n");
	
	fclose(in);
	
	return 0;
}
