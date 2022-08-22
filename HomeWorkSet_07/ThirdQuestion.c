#include <stdio.h>

int main()
{
    // Insert an element in an array
    int n, value, posi;
    printf("Enter the array length : ");
    scanf("%d", &n);
    int arr[n]; // Intializing the array
    // Input array from the user.
    for (int i = 0; i < n; i++)
    {
        printf("Enter the values of the array : ");
        scanf("%d", &arr[i]);
    }
    // Output of the array
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");
    printf("Enter the position where you want to insert : ");
    scanf("%d", &posi);
    printf("Enter the number you want to put in the array : ");
    scanf("%d", &value);
    // Putting the value of an array
    for (int k = n - 1; k >= posi - 1; k--)
    {
        arr[k + 1] = arr[k];
        arr[posi - 1] = value;
    }
    // final array after inserting the new value / number
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}