#include<stdio.h>
//SIMPLE CALCULATOR
int main (){
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: \n");
    scanf("%d",&b);
    char op;
    printf("Enter your operation: \n");
    scanf(" %c",&op);
    if(op=='+'){
        int sum=a+b;
        printf("The sum is %d",sum);
    }else if(op=='-'){
        int diff=a-b;
        printf("The difference is %d",diff);
    }else if(op=='*'){
        int pro=a*b;
        printf("The product is %d",pro);
    }else if(op=='/'){
        if(b!=0){
            float quo=(float)a/b;
            printf("The quotient is %.2f",quo);
        }else{
            printf("Not divisible by zero");
        }
    }else if(op=='%'){
        int rem=a%b;
        printf("The remainder is %d",rem);
    }else{
        printf("Invalid operator");
    }
return 0;
}