#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks\n");
    scanf("%d", &marks);
    switch (marks)
    {
        case 80:
        printf("Excellent\n");
        break;
        case 70:
        printf("Very good\n");
        break;
        case 60:
        printf("Good\n");
        case 50:
        printf("Average\n");
        break;
        case 40:
        printf("Fail\n");
        break;
        default:
        printf("Out of switch block\n");
    }
    printf("End of program");
}