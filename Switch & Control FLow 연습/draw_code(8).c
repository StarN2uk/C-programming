#include<stdio.h>

int main()
{
	int i, count1, count2;
	i = 0;
	count1 = 0;
	count2 = 0;
	while(i <= 100)
	{
		i++;
		switch(i % 3)
		{
			case 0 :
				if(i % 2 == 0)
				{
					count1++;//Â¦¼ö 
				}
				else
				{
					count2++;//È¦¼ö 
				}
				break;
			case 1 :
				printf("");
		}
	}
	printf("Â¦¼ö´Â %d°³\tÈ¦¼ö´Â %d°³", count1, count2);
	return 0;
}
