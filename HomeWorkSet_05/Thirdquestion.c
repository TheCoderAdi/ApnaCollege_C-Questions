#include <stdio.h>

void tempTeller(int n);
int main()
{
    //Tell the temperature
    int n;
    printf("Enter the temperature : ");
    scanf("%d", &n);
    tempTeller(n);
    return 0;
}
void tempTeller(int n)
{
    if (n < 0)
    {
        printf("Cold");
    }
    else if (n == 0)
    {
        printf("Neither Hot nor cold");
    }
    else
    {
        printf("Hot");
    }
}