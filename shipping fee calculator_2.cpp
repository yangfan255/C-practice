//calculate shipping cost. the first 1 kg is 23, and increase 14 per kg afterwards.
#include <stdio.h>

int main()
{
	int k, p;
	
	printf("weight(k)  price(usd)\n");
	
	for (k=1; k<=20; k++)
	{
		p=23+(k-1)*14;
		printf("%d           %d\n", k, p);	
	}
	
	return 0;
}
