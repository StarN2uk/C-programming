#include<stdio.h>

struct player{
	char name[10];
	double score;
	int rank;
};

int main()
{
	struct player a = {"µ¹°í·¡", 15.5, 6};
	printf("%s %.1lf %d", a.name, a.score, a.rank); 
	return 0;
}
