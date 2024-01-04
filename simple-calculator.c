#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
     int a, b;
     int c;
    int sum, sub, mul, div;

    printf("Enter operator\n");
    scanf("%d", &c);
    printf("Enter two operands\n");
    scanf("%d %d", &a, &b);
    switch ('+')
    {
        case '+':
        sum = a+b;
        printf("value is %d\n", sum);
        break;
        case '-':
        sub = a-b;
        printf("Value is %d\n", sub);
        break;
        case '*':
        mul = a*b;
        printf("Value is %d\n");
        break;
        case '/':
        div = a/b;
        printf("Value is %d\n");
        break;
        default:
        printf("invalid operator or oprands\n");
    }
    printf("End of the program");
}