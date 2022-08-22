# include<stdio.h> 

 int main(){
    //find the largest number in an array
    int n ;
    printf("Enter the number : ");
    scanf("%d",&n);
    int arr [n] ;
    for(int i = 0 ; i < n ; i++){
        printf("Enter the array elemenets :");
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < 5 ; i++){
        if(arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
    printf("%d is the largest number in the array.",arr[0]);
    return 0;
}