#include<stdio.h>
#include<string.h>

struct Address{
	char name[10];
	char phon[20];
	char home[50];
};

int main()
{
	struct Address man1, man3;
	struct Address man2 = {"Juwon", "010-3512-1835", "Suwon"};
	strcpy(man1.name, "Juwon");
	strcpy(man1.phon, "010-9642-1254");
	strcpy(man1.home, "Dae-gu");
	scanf("%s %s %s", man3.name, man3.phon, man3.home);
	
	printf("name = %s phone = %s home = %s\n", man1.name, man1.phon, man1.home);
	printf("name = %s phone = %s home = %s\n", man2.name, man2.phon, man2.home);
	printf("name = %s phone = %s home = %s", man3.name, man3.phon, man3.home);
	
	return 0;
}
