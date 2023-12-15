#include <stdio.h>
int main()
{
    int a = 10, b = 15, c = 45, sum;
    sum = a + b;
    printf("%d\n", sum);
    {
        a = 27; 
        sum = a + b;
        printf("%d\n", sum);
        {
            a = 1000;
            b = 1500;
            sum = a + b + c;
            printf("%d\n", sum);
            {
                if (a <= b)
                printf("Too young to date\n");
                else
                {
                    printf("You can date");
                }
            }
        }
    }
}