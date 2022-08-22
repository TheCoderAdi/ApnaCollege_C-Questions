#include <stdio.h>

int main()
{
    // Print how many times a number occurs in an array
    int InputTheNumber;
    int arr[5] = {1, 2, 2, 3, 2};
    int count = 0;
    printf("Enter the number : ");
    scanf("%d", &InputTheNumber);
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == InputTheNumber)
        {
            count++;
        }
    }
    printf("The Number occured in the array %d times.", count);
    return 0;
}