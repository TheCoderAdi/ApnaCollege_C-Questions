#include <stdio.h>

int main()
{
    // Calculate the Perimeter of the rectangular
    int length, width, perimeter;
    printf("Enter the length of the rectangular : ");
    scanf("%d", &length);
    printf("Enter the width of the rectangular : ");
    scanf("%d", &width);
    perimeter = 2 * (length + width);
    printf("The perimeter of the rectangular is : %d ", perimeter);
    return 0;
}