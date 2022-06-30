#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int res;
	
	srand(time(NULL));
	printf("%d\n", rand());
	res = rand()%10000*1000;
	srand(time(NULL));
	res+=rand()%10000;
	printf("%d", res);
	return 0;
}
