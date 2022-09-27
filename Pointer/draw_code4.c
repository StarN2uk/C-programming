#include<stdio.h>
void AddNum(int*, int*);
void SubNum(int*, int*);
void MulNum(int*, int*);
void DivNum(int*, int*);

int main()
{
	int a, b;
	int *pa = &a, *pb = &b;
	
	printf("정수 입력: ");
	scanf("%d %d", &a, &b);
	
	AddNum(&a, &b);
	printf("%d\n", *pa);
	SubNum(&a, &b);
	printf("%d\n", *pa);
	MulNum(pa, pb);
	printf("%d\n", *pa);
	DivNum(pa, pb);
	printf("%d\n", *pa);
	return 0;
}

void AddNum(int* p1, int* p2)
{
	*p1 = *p1 + *p2;
}
void SubNum(int* p1, int* p2)
{
	*p1 = *p1 - *p2;
}
void MulNum(int* p1, int* p2)
{
	*p1 = *p1 * *p2;
}
void DivNum(int *p1, int *p2)
{
	*p1 = *p1 / *p2;
}
