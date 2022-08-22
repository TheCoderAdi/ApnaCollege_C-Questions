#include <stdio.h>

int main()
{
    char c;
    printf("Enter the character : ");
    scanf("%c", &c);
    if (c >= '0' && c <= '9')
    {
        printf("Yes it is a digit .");
    }
    else
    {
        printf("No it is not a digit .");
    }
    return 0;
}