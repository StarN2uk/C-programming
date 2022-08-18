#include<stdio.h>

int main()
{
	int sum1, sum2, n;
	sum1 = 0;
	sum2 = 0;
	n = 0;
	while(n <= 10)
	{
		n++;
		switch(n)
		{
			case 1 :
				sum1 = sum1 + n;
				break;
			case 2 :
				sum2 = sum2 + n;
				break;
			case 3 :
				sum1 = sum1 + n;
				break;
			case 4 :
				sum2 = sum2 + n;
				break;
			case 5 :
				sum1 = sum1 + n;
				break;
			case 6 :
				sum2 = sum2 + n;
				break;
			case 7 :
				sum1 = sum1 + n;
				break;
			case 8 :
				sum2 = sum2 + n;
				break;
			case 9 :
				sum1 = sum1 + n;
				break;
			case 10 :
				sum2 = sum2 + n;
				break;
		}
	}
	printf("È¦¼ö ÇÕ: %d\tÂ¦¼ö ÇÕ: %d", sum1, sum2);
	return 0;
}
