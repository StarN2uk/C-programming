#include<Stdio.h>

int main()
{
	//변수 
	int n, i; // i -> 반복을 위한 변수, n 입력 받을 100이하의 자연수 
	int sum = 0; // 합계를 저장할 변수, 쓰레기값 방지
	
	//입력받는 곳 , 100이하의 자연수가 아닐 경우 재입력 
	do
	{
		printf("100이상의 자연수를 입력하세요 \n");
		scanf("%d", &n); 
	}while(n <= 100);
	
	// 1 ~ n 까지 반복하기
	for(i = 1; i <= n; i++)
	{
		//3배수인지 7배수인지 확인
		if(i % 3 == 0 || i % 7 == 0)
		{
			printf("%d ", i);
			
			// sum에 3배수 혹은 7배수를 더하기
			sum += i; 
		}
	}
	
	//총합 출력 
	printf("총 합은 %d 입니다. \n", sum); 
	return 0;
}
