#include<Stdio.h>

int main()
{
	int age; // �Է� ���� ����
	
	printf("���̸� �Է��ϼ���.");
	scanf("%d", &age);
	
	switch(age/10)
	{
		case 0 :
			printf("\n���ҳ� �Դϴ�. \n");
			break;
		case 1:
			printf("\nû�ҳ� �Դϴ�. \n");
			break;
		case 2 :
			printf("\nû�� �Դϴ�. \n");
			break;
		case 3 :
			printf("\nû�� �Դϴ�. \n");
			break;
		case 4 :
			printf("\n�߳� �Դϴ�. \n");
			break;
		case 5 :
			printf("\n�߳� �Դϴ�. \n");
			break;
		case 6 :
			printf("\n��� �Դϴ�. \n");
			break;
		case 7 :
			printf("\n��� �Դϴ�. \n");
			break;
		case 8 :
			printf("\n��� �Դϴ�. \n");
			break;
		case 9 :
			printf("\n���� �鼼�Դϴ�. \n");
			break;
		default :
			printf("\n���� �鼼�Դϴ�. \n");
			break;
	}
	return 0;
}
