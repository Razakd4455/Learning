#include <stdio.h>
int main()
{
    int age;
    printf("Enter Your Age:");
    scanf("%d", &age);
    if (age > 17 && age < 30)
    {
        printf("Your Age is %d\n", age);
        printf("You are qualifed to be enlisted in the army\n");
    }
    else 
    {
        printf("Your age is %d\n", age);
         printf("You are not qualified to be enlisted in the army");
    }
}