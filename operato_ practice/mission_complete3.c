#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int res;
	float res1;
	
	srand(time(NULL));
	printf("%d\n", rand());
	res = rand()%100;
	srand(time(NULL));
	res1 = (rand()%10)*0.1;
	printf("%.1f\n",res + res1);
	return 0;
}
