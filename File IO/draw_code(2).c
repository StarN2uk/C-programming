#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *out = fopen("NumberFile.txt", "w");
	int n, m;
	double d1, d2;
	
	if(out == NULL)
	{
		printf("���� ����\n");
		exit(1);
	}
	
	printf("������ �� �� �Է��ϼ���: ");
	scanf("%d %d", &n, &m);
	printf("�Ǽ��� �� �� �Է��ϼ���: ");
	scanf("%lf %lf", &d1, &d2);
	
	printf("\n\n\n�Է� ���� ������ ��� ��µǾ����ϴ�.\n");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>");
	printf("�� �ֿܼ��� ã������?");
	
	fprintf(stdout, "%d %d\n", n, m);
	fprintf(stdout, "%.1lf %.1lf", d1, d2);
	
	fclose(out);
	 
	return 0;
}
