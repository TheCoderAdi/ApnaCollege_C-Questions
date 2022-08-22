#include <stdio.h>
#include <string.h>

int main()
{
    // Print the highest frequency character in a string.
    char s[1000];
    int a[1000], i, j, k = 0, count = 0, n;
    printf("Enter the string : ");
    gets(s);
    for (j = 0; s[j]; j++)
    {
        n = j;
    }
    for (i = 0; i < n; i++)
    {
        a[i] = 0;
        count = 1;
        if (s[i])
        {
            for (j = i + 1; j < n; j++)
            {
                if (s[i] == s[j])
                {
                    count++;
                    s[j] = '\0';
                }
            }
            a[i] = count;
            if (count >= k)
            {
                k = count;
            }
        }
    }
    printf("Maximum occuring characters : ");
    for (j = 0; j < n; j++)
    {
        if (a[j] == k)
        {
            printf(" '%c',", s[j]);
        }
    }
    printf("\b=%d times \n ", k);
    return 0;
}