#include<stdio.h>

struct speed{
	int max_speed;
	int now_speed;
};
int main()
{
	struct speed a;
	scanf("%d %d", &a.max_speed, &a.now_speed);
	printf("%d", a.now_speed - a.max_speed);
	return 0;
}
