#include<stdio.h>

struct Circle{
	int x;
	int y;
	double r;
};

int main()
{
	struct Circle c1 = {2, 7, 13.5};
	struct Circle c2 = {4, 5, 12.4};
	struct Circle c3;
	printf("x = %d, y = %d, r = %.1lf\n", c1.x, c1.y, c1.r);
	printf("x = %d, y = %d, r = %.1lf\n", c2.x, c2.y, c2.r);
	scanf("%d %d %lf", &c3.x, &c3.y, &c3.r);
	printf("x = %d, y = %d, r = %.1lf\n", c3.x, c3.y, c3.r);
	return 0;
}
