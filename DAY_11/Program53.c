#include<stdio.h>
//FIBONACCI SERIES
int main (){
    int a,b,c,n;
    printf("Enter value for n:");
    scanf("%d",&n);
    a=0;
    b=1;
    c=0;
    if(n==0){
        printf("%d",a);
    }else if(n==1){
        printf("%d %d",a,b);
    }else{
        for(int i=0;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
            printf(" %d",c);
        }
    }
    
return 0;
}