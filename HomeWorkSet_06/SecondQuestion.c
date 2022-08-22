#include <stdio.h>

int reverseArray(int arr[],int n);
int printArray(int arr[],int n);
int main()
{
    //Reversing an Array
    int elements[5] = {1,2,3,4,5};
    printf("Before reversing the array \n");
    printArray(elements,5);
    printf("After reversing the array \n");
    reverseArray(elements,5);
    printArray(elements,5);
    return 0;
}
int printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int reverseArray(int arr[], int n){
    for(int i = 0 ; i < n/2 ;  i++){
        int firstVal = arr[i];
        int lastVal  = arr[n-i-1];
        arr[i]= lastVal;
        arr[n-i-1]=firstVal;
    }
}