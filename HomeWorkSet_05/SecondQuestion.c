# include<stdio.h> 
# include<math.h> 

int sqRoot(int a);
 int main(){
    int a ;
    printf("Enter a number : ");
    scanf("%d",&a);
    int s = sqRoot(a);
    printf("The square root of the number is : %d ",s);
    return 0;
}
int sqRoot(int a ){
    int res = sqrt(a);
    return res;
}