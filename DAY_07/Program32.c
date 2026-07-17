#include<stdio.h>
//PALIDROME CHECK
int main (){
    int n;
    int rev=0;
    printf("Enter value for n: ");
    scanf("%d",&n);
    int t=n;
    //int i=n;
    while(n>0){
        int c=n%10;
        rev=rev*10+c;
        n/=10;
    }
    printf("%d",rev);
    if(rev==t){
        printf("\n%d is a palindrome",t);
    }else{
        printf("\n%d is not a palindrome",t);
    }
return 0;
}