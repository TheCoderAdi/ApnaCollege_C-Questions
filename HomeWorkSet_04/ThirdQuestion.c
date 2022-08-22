#include <stdio.h>

int main()
{
    //Print Prime Number in a Range
    int uRange, lRange, flag;
    printf("Enter the starting value : ");
    scanf("%d", &uRange);
    printf("Enter the ending value : ");
    scanf("%d", &lRange);
    printf("Prime number between %d and %d : ", uRange, lRange);
    while (uRange < lRange)
    {
        flag = 0;
        for (int i = 2; i <= uRange / 2; ++i)
        {
            if (uRange % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", uRange);
        }
        ++uRange;
    }
    printf("\n");
    return 0;
}