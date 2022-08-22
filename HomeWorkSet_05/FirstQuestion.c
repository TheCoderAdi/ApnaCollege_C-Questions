#include <stdio.h>
int sum(int a, int b);
int main()
{
    //Sum of two numbers
    int a , b , c ;
    printf("Enter first Number : ");
    scanf("%d",&a);
    printf("Enter second Number : ");
    scanf("%d",&b);
    c = sum(a,b);
    printf("The sum of your two entered number is : %d ",c);
    return 0;
}
int sum(int a , int b){
    return a + b ;
}