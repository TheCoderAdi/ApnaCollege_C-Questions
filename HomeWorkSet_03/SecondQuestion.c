#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    if (n >= 1 && (n != 0 || n < 0)) //If n = 5-->Logic--> T && (T || F)--> T && T --> T
    {
        printf("It is a natural number.");
    }
    else
    {
        printf("It is not a natural number.");
    }
    return 0;
}