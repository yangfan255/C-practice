//count vowel number within a sentence and ignore up/low cases
#include <stdio.h>

int main()
{
	int a=0, e=0, i=0, o=0, u=0;
	int ch;
	
	printf("enter a sentence here: ");
	
	while ((ch = getchar()) != '\n')
	{
		switch (ch)
		{
			case 'a':
			case 'A': a++; break;
			
			case 'e':
			case 'E': e++; break;
			
			case 'i':
			case 'I': i++; break;
			
			case 'o':
			case 'O': o++; break;
			
			case 'u':
			case 'U': u++; break;
		}
	
	}
	
	printf("The sentence you input contains a(%d), e(%d), i(%d), o(%d), u(%d)\n", a, e, i, o, u);
	
	return 0;
}
