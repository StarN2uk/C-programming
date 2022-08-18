#include<stdio.h>

int main()
{
	int a, b, c, d, e, f, g, h, i, j, best;
	
	printf("10개의 자연수를 입력하시오.");
	scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
	best = 0;
	
	switch(best)
	{
		case 0 :
			if(best <= a)
			{
				best = a;
			}
		case 1 :
			if(best <= b)
			{
				best = b;
			}
		case 2 :
			if(best <= c)
			{
				best = c;
			}
		case 3 :
			if(best <= d)
			{
				best = d;
			}
		case 4 :
			if(best <= e)
			{
				best = e;
			}
		case 5 :
			if(best <= f)
			{
				best = f;
			}
		case 6 :
			if(best <= g)
			{
				best = g;
			}
		case 7 :
			if(best <= h)
			{
				best = h;
			}
		case 8 :
			if(best <= i)
			{
				best = i;
			}
		case 9 :
			if(best <= j)
			{
				best = j;
			}
	}
	printf("%d", best);
	return 0;
}
