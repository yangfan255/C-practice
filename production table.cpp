#include <stdio.h>

int main()
{
	int i, j, product;
	
	for (i=1;i<=9; i++)
	{
		for (j=1;j<=i; j++)
		{
			product=i*j;
			printf("%d*%d=%-2d  ", i, j, product);
		}
		putchar('\n');
	}
	return 0;
}
