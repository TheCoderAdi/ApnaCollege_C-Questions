#include <stdio.h>
#include <ctype.h>

int main()
{
    // Replace lowercases with uppercases vice versa

    int count, i, ch;
    char sentence[100];
    printf("Enter a sentence \n");
    for (i = 0; (sentence[i] = getchar()) != '\n'; i++)
    {
        ;
    }
    sentence[i] = '\0';
    count = i;
    for (i = 0; i < count; i++)
    {
        ch = islower(sentence[i]) ? toupper(sentence[i]) : tolower(sentence[i]);
        putchar(ch);
    }
    return 0;
}