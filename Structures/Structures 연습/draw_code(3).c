#include<stdio.h>
#include<string.h>

struct Person{
	char name[10];
	int age;
	double height;
};

int main()
{
	int i, j;
	struct Person list[5] = {{"김유신", 15, 178.3}, {"김춘추", 13, 173.3}, {"사다함", 17, 183.2}, {"원효", 19, 168.9}, {"장보고", 13, 187.3}};
	for(i = 0; i < 5; i++)
	{
		printf("%s %d %.1lf", list[i].name, list[i].age, list[i].height);
		printf("\n");
	}
	return 0;
}
