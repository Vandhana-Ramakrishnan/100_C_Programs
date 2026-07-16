#include<stdio.h>
//SQAURE OF ALL NUMBERS TILL N
int main (){
    int n;
    printf("Enter the value for n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("\n%d",i*i);
    }

return 0;
}