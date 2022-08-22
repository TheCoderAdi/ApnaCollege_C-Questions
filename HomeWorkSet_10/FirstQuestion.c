#include <stdio.h>
#include <string.h>

int main()
{
    // Program to read a string from a file & output to the user
    FILE *ptr;
    char ch;
    ptr = fopen("test.txt", "r");
    if (NULL == ptr)
    {
        printf("File can't be opened \n");
    }
    printf("Content of the file are \n");
    do
    {
        ch = fgetc(ptr);
        printf("%c", ch);
    } while (ch != EOF);
    fclose(ptr);
    return 0;
}