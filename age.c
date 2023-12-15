#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    {
        if (age > 25 && age < 30)
        printf("Your age is %d\n", age);
        printf("You are qualified to join the program");
    }
}