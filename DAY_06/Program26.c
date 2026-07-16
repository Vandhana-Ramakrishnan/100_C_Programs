#include<stdio.h>
//FACTORIAL
int main (){
    int n;
    printf("Enter value for n: ");
    scanf("%d",&n);
    int f=1;
    if(n<=1){
        printf("\nFactorial is %d ",f);
    }else{
        for(int i=1;i<=n;i++){
            f*=i; 
        }
        printf("\nFactorial is %d ",f);
    }
return 0;
}