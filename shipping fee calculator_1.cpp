#include <stdio.h>

#define first_kg 23
#define next_kg 14

int main()
{
	int weight, cost;
	
	printf("weight(kg)- cost(usd)\n");
		
	for (weight=1, cost=first_kg; weight<=20; weight++, cost+=next_kg)
	{
		printf("%3d  --  %3d\n", weight, cost);
	}

	return 0;
}
