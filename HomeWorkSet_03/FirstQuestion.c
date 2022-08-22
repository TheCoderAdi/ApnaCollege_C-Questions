#include <stdio.h>

int main()
{
    //Armstrong Number or not 
    int n, r, sum, temp;
    sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (temp == sum)
    {
        printf("Armstrong Number.");
    }
    else
    {
        printf("Not armstrong number.");
    }
    return 0;
}