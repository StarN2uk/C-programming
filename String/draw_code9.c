#include<stdio.h>

int main()
{
	char str[100] = "my name is Joun";// -> �������� �ڵ����� 0�� �־��ش�.
	int i = 0;
	while(str[i] != 0)
	{
		printf("%c", str[i]);
		i++;
	} 
	return 0;
}
