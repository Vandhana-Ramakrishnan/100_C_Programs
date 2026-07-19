#include<stdio.h>
//SQAURE NUMBER
int main (){
    int n;
    printf("Enter value for n: ");
    scanf("%d",&n);
    int i=1;
    int found=0;
    while(i*i<=n){
        if(i*i==n){
            found=1;
            i++;
            break;
        }else{
            found=0;
            i++;
        }
    }
    if(found==1){
        printf("%d is a perfect square",n);
    }else{
        printf("%d is not a perfect squaare",n);
    }

return 0;
}