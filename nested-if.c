#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > 0 || num2 > 0 || num3 > 0)
    {
    if (num1 >= num2 || num1 >= num3)
    {
        printf("The number is %d and is the mmaximum number\n", num1);
    }
    else
    {
        if (num2 >= num1 || num2 >= num3)
        {
            printf("The number is %d and is the maximum number\n", num2);
        }
    }
    if (num3 >= num1 || num3 >= num2)
    {
        printf("The number is %d and is the maximum number\n", num3);
    }
    else
    printf("End of program");
}