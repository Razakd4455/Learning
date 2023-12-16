#include <stdio.h>
int main()
{
    int marks;
    printf("What is your marks?\n");
    scanf("%d", &marks);
    if (marks >= 80)
    printf("You have grade A\n");
    else if (marks >= 70)
    printf("You have grade B\n");
    else if (marks >= 60)
    printf("You have grade C\n");
    else if (marks >= 50)
    printf("You have grade D");
    else
    printf("You have grade F\n");
}