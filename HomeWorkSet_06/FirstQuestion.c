#include <stdio.h>

int main()
{
    // Maximum number using pointer
    int a, b;
    int *ptr = &a;
    int *ptr1 = &b;
    printf("Enter a number : ");
    scanf("%d", ptr);
    printf("Enter another number : ");
    scanf("%d", ptr1);
    if (*ptr > *ptr1)
    {
        printf("%d is the maximum number. ", *ptr);
    }
    else
    {
        printf("%d is the maximum number. ", *ptr1);
    }
    return 0;
}