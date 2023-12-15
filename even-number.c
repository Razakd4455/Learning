#include <stdio.h>
int main()
{
    int numb;
    printf("Enter number\n");
    scanf("%d", &numb);
    if (numb%2 == 0)
    {
        printf("The number is %d\n", numb);
        printf("The number %d is even", numb);
    }
    else
    {
        printf("The number is %d\n", numb);
        printf("The number %d is odd", numb);
    }
}