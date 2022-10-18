#include<stdio.h>

struct Circle{
	int x;
	int y;
	double r;
};

int main()
{
	struct Circle c1, c2, c3, c4;
	c2.x = 7;
	c2.y = 8;
	c2.r = 7.4;
	c4.x = c2.y;
	c4.y = c2.x;
	c4.r = c2.r;
	printf("x ÁÂÇ¥ = %d, y ÁÂÇ¥ = %d, ¹İÁö¸§ = %.1lf", c4.x, c4.y, c4.r);
	return 0;
}
