#include <stdio.h>
int main()
{
    int a, i, number;
    printf("Enter number\n");
    scanf("%d", &number);
    for (i = 1; i <= 10; i++ )
    {
        a = number * i;
        printf("%d\n", a);
    }
}