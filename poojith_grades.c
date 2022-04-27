#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks please : ");
    scanf("%d", &marks);
    if (marks < 101 && marks >= 85)
    {
        printf("Grade A\n");
    }
    else if (marks < 85 && marks >= 70)
    {
        printf("Grade B\n");
    }
    else if (marks < 70 && marks >= 55)
    {
        printf("Grade C\n");
    }
    else if (marks < 55 && marks >= 40)
    {
        printf("Grade D\n");
    }
    else if (marks < 40)
    {
        printf("Grade F\n");
    }
    return 0;
}