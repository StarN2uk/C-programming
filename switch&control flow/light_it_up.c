#include<Stdio.h>

int main()
{
	int age; // 입력 받을 나이
	
	printf("나이를 입력하세요.");
	scanf("%d", &age);
	
	switch(age/10)
	{
		case 0 :
			printf("\n유소년 입니다. \n");
			break;
		case 1:
			printf("\n청소년 입니다. \n");
			break;
		case 2 :
			printf("\n청년 입니다. \n");
			break;
		case 3 :
			printf("\n청년 입니다. \n");
			break;
		case 4 :
			printf("\n중년 입니다. \n");
			break;
		case 5 :
			printf("\n중년 입니다. \n");
			break;
		case 6 :
			printf("\n장년 입니다. \n");
			break;
		case 7 :
			printf("\n노년 입니다. \n");
			break;
		case 8 :
			printf("\n노년 입니다. \n");
			break;
		case 9 :
			printf("\n도전 백세입니다. \n");
			break;
		default :
			printf("\n성공 백세입니다. \n");
			break;
	}
	return 0;
}
