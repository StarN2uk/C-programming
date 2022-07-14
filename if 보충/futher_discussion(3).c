#include<stdio.h>

int main()
{
	int i;
	
	printf("배수량을 입력하시오.");
	scanf("%d", &i);
	if(i <= 440)
	{
		printf("고속정\t");
		if(i < 190)
		{
			printf("참수리급");
		}
		else if(i < 335)
		{
			printf("검은 독수리급");
		}
		else if(i < 720)
		{
			printf("윤영하급");
		}
	}
	else if(i < 440)
	{
		printf("초계함\t");
		if(i < 1000)
		{
			printf("동해급");
		}
		else if(i < 1200)
		{
			printf("포항급");
		}
	}
	else if(i < 1200)
	{
		printf("호위함\t");
		if(i < 1500)
		{
			printf("울산급");
		}
		else if(i < 2300)
		{
			printf("대구급");
		}
		else if(i < 2800)
		{
			printf("인천급");
		}
	}
	else if(i < 7600)
	{
		printf("구축함\t");
		if(i < 3200)
		{
			printf("광계토 대왕급");
		}
		else if(i < 4500)
		{
			printf("충무공 이순신급");
		}
		else if(i < 7600)
		{
			printf("세종대왕급");
		}
	}
	return 0;
}
