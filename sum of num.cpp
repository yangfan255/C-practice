//enter and sum all numbers, break upon character
#include <stdio.h>

int main()
{	
	int num = 0, temp;
	long long result = 0;
	
	do 
	{
		printf("enter a number here: ");
		result = result + num;
		temp = scanf("%d", &num);
	} while (temp == 1);
	
	printf("the sum of all number is: %d\n", result);

	return 0;
} 
