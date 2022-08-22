#include <stdio.h>

int main()
{
    int i, len = 0, j;
    char str[] = "Welcome To Apna College";
    // Calculating length of array
    len = sizeof(str) / sizeof(str[0]);
    for (i = 0; i < len; i++)
    {
        if (str[i] ==' ')
        {
            for (j = i; j < len; j++)
            {
                str[j] = str[j + 1];
            }
            len--;
        }
    }
    printf("String after removing all the white spaces :%s", str);
    return 0;
}