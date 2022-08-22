#include <stdio.h>

int main()
{
    // Print the smallest number between two
    int a, b;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Enter another number : ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("%d is the smallest number.", b);
    }
    else
    {
        printf("%d is the smallest number.", a);
    }
    return 0;
}