#include<stdio.h>

int main()
{
	int sum, a, b, c, d, n;
	sum = 0;
	printf("당신의 국어, 영어, 수학, 과학 시험 성적을 쓰시오.");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	sum = a + b + c + d;
	n = (a + b + c + d) / 4;
	
	switch(n / 10)
	{
		case 10 :
			printf("참 잘했어요.");
			break;
		case 9 :
			printf("참 잘했어요.");
			break;
		case 8 :
			printf("잘했어요.");
			break;
		case 7 :
			printf("화이팅.");
			break;
		case 6 :
			printf("힘내요, 할 수 있어요.");
			break;
		case 5 :
			printf("힘내요, 할 수 있어요.");
			break;
		case 4 :
			printf("힘내요, 할 수 있어요.");
			break;
		case 3 :
			printf("힘내요, 할 수 있어요.");
			break;
		case 2 :
			printf("힘내요, 할 수 있어요.");
			break;
		case 1 :
			printf("힘내요, 할 수 있어요.");
			break;
		case 0 :
			printf("힘내요, 할 수 있어요."); 
	}
	return 0;
}
