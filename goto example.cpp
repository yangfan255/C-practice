#include <stdio.h>

int main()
{
	int i = 6;
	
	while (i++)
	{
		if (i > 10)
		{
			goto A; 
		}
	}
	
A: printf("hello, i = %d \n", i);
	
	return 0;
}
