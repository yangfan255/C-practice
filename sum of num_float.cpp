//enter and sum all numbers, break upon character
#include <stdio.h>

int main()
{	
	float num = 0;
	int temp;
	double result = 0;
	
	do
	{
		printf("enter a number:  ");
		do
		{
			result = result + num;
			temp = scanf("%f", &num);
		} while (getchar() != '\n' && temp == 1);
	} while (temp == 1);
	
	printf("the sum of all number is: %.2lf\n", result);

	return 0;
} 
