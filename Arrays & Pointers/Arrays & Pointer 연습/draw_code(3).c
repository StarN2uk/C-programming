#include<stdio.h>

int main()
{
	char *sp = "Hello String";
	char *name = "��ť���ڵ�";
	
	printf("%d %d\n", sp, "Hello String");
	printf("%d %d\n", name, "��ť���ڵ�");
	printf("%s %s\n", sp, "Hello String");
	printf("%s %s\n", name, "��ť���ڵ�");
	 
	return 0;
}
