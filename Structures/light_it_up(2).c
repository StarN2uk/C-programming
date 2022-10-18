#include<stdio.h>

struct Circle{
	int x;
	int y;
	double r;
};

int main()
{
	struct Circle c1, c3, c4;
	c1.x = 7;
	c1.y = 8;
	c1.r = 7.4;
	printf("x ÁÂÇ¥ = %d, y ÁÂÇ¥ = %d, ¹İÁö¸§ = %.1lf", c1.x, c1.y, c1.r);
	return 0;
}
