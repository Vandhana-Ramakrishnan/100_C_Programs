#include<stdio.h>
//SUM OF ALL ODD NUMBERS TILL N
int main (){
    int n;
    int sum=0;
    printf("Enter the value for n: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    printf("\nSum of all odd numbers till %d is %d",n,sum);

return 0;
}