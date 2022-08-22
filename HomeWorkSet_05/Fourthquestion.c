# include<stdio.h> 
#include<math.h>
int square(int n );
 int main(){
    //Square of the number using a function
    int n ;
    printf("Enter the number : ");
    scanf("%d",&n);
    int sq = square(n);
    printf("The square of the number is :%d",sq);
    return 0;
}
int square(int n ){
    return pow(n,2);
}