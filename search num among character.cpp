#include <stdio.h>
#include <math.h>

int main()
{
        int ch;
        long long num = 0;
        long long temp;  
		int is_overflow = 0;

        const int max_int = pow(2, sizeof(int) * 8) / 2 - 1;
        const int min_int = pow(2, sizeof(int) * 8) / 2 * (-1);

        printf("find num in this character:");

        do
        {
                ch = getchar();

                if (ch >= '0' && ch <= '9')
                {
                        temp = 10 * num + (ch - '0');
                        if (temp > max_int || temp < min_int)
                        {
                                is_overflow = 1;
                                break;
                        }
                        else
                        {
                                num = temp;
                        }
                }
                else
                {
                        if (num)
                        {
                                break; 
                        }
                }

        }
        while (ch != '\n');

        if (is_overflow)
        {
                printf("the number is beyond limits\n");
        }
        else
        {
                if (!num)
                {
                        printf("there is no number\n");
                }
                else
                {
                        printf("the result is %d\n", num);
                }
        }

        return 0;
}
