#include<stdio.h>

struct Circle {
	int x;
	int y;
	double r;
	double area;
	double round;
};

int main()
{
	struct Circle c;
	c.x = 10;
	c.y = 20;
	c.r = 3.6;
	c.area = c.r * c.r * 3.14;
	c.round = c.r * 2 * 3.14;
	printf("면적 = %.4lf 둘레 = %.3lf", c.area, c.round);
	
	return 0;
}
