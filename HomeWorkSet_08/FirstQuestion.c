# include<stdio.h> 
# include<string.h>

 int main(){
    //Convert all lowercases vowels to uppercase in a string 
    char ch[]="apnacollege" ;
    for(int i = 0 ; ch[i] != '\0';i++){
        if(ch[i]== 'a'|| ch[i]== 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u'){
            continue;
        }
        else{
            ch[i]=ch[i]-32;
        }
    }
    printf("%s",ch);
    return 0;
}