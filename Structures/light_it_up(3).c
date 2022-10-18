#include<stdio.h>

struct Circle {
	int x;
	int y;
	double r;
};

int main()
{
	struct Circle c1, c3, c4;
	struct Circle c2 = {4, 44, 444.444444};
	printf("x ÁÂÇ¥ = %d, y ÁÂÇ¥ = %d, ¹İÁö¸§ = %lf", c2.x, c2.y, c2.r);
	return 0;
}
