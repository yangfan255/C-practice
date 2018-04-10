#include <stdio.h>

int main()
{
	int ini_money = 10000;
	int count = 0, j = ini_money, h = ini_money;
	
	do
	{
		j += ini_money * 0.1;
		h += h * 0.05;
		count ++; 
	}while (j >= h);
	
	printf("it takes %d years that j become bigger than h. \n", count);
	
    return 0;
}
