#include <stdio.h>
#include <stdbool.h>
//test if a number is prime number

 
int main()
{
	int num, i;
	_Bool flag = 1;
	
	printf("enter a number here:");
	scanf("%d", &num);
	
	for (i=2; i<num/2; i++)
	{
		if (num % i == 0)
		{
			flag = 0;
		}
	}
	
	if (flag)
	{
		printf("%d is a primer number\n", num);
	}
	else
	{
		printf("%d is a not primer number\n", num);
	}
	
	return 0;
}
