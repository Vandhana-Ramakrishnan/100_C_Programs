#include<stdio.h>
//REVERSE A NUMBER
int main (){
    int n,rev;
    rev=0;
    printf("Enter value for n: ");
    scanf("%d",&n);
    int i=n;
    while(n>0){
        int c=n%10;
        //printf("\n%d",c);
        rev=rev*10+c;
        n/=10;
    }
    printf("Reverse of number is: %d",rev);
    
return 0;
}