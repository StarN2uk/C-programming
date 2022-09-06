#include<stdio.h>

int main()
{
	int arr[10] = {5, 2, 1, 5, 6, 7, 8, 9, 4, 2};
	int i, min = arr[0];
	
	for(i = 0; i <= 9; i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("min = %d", min);
	return 0;
}
