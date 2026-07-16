#include<stdio.h>
//SUM OF ALL EVEN NUMBERS TO N
int main (){
    int n;
    int sum=0;
    printf("Enter value for n: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    printf("\nSum of all even numbers till %d is %d",n,sum);

return 0;
}