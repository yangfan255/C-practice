#include <stdio.h>
#include <stdbool.h>
//count prime number below 10000

 
int main()
{
	int num, i;
	_Bool flag = 1;
	int count = 2;
	
	for (num = 5; num < 10000; num++)
	{
		for (i = 2; i < num / 2; i++)
		{
			if (num % i == 0)
			{
				flag = 0;
				break;
			}
		}
		
		if (flag)
		{
			count++;
		}
		else
		{
			flag = 1;
		}
	}
	
	printf("Beblow 10000 there are %d prime number", count);
	
	return 0;
}
