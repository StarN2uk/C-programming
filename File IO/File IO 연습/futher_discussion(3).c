#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *out = fopen("My drink.txt", "w");
	char a[1024], b[1024], c[1024];
	if(out == NULL)
	{
		printf("������ �����ϴ�.");
		exit(1);
	}
	
	printf("�����ϴ� ������� �̸��� �뷮(ml), ����(��)�� �Է��Ͻÿ�.");
	scanf("%s %s %s", &a, &b, &c);
	
	fputs(a, out);
	fputs(b, out);
	fputs(c, out);
	
	return 0;
}
