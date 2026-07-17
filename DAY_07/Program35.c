#include<stdio.h>
//PERFECT NUMBER
int main (){
    int n;
    int sum=0;
    int c=0;
    printf("Enter value for n: ");
    scanf("%d",&n);
    int temp=n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
            //printf("\n%d",sum);
        }
    }
    if(sum==temp){
        printf("\n%d It is a perfect number",temp);
    }else{
        printf("\n%d is not a perfect number",temp);
    }
return 0;
}