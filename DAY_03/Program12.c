#include<stdio.h>
//DIVISIBLITY BY 5 AND 11
int main() {
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    if(n%5==0 && n%11==0){
        printf("Number is divisible by both 5 and 11 %d\n",n);
    }else{
        printf("Number not divisible by both 5 and 11\n");
    }
return 0;
}