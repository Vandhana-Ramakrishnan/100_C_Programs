#include<stdio.h>

int main (){
    int a,b;
    printf("\n Enter value of first num: ");
    scanf("%d",&a);
    printf("\n enter value of second num: ");
    scanf("%d",&b);
    int add=a+b;
    int sub=a-b;
    int mul=a*b;
    float div;
    if(b!=0){
        div=(float)a/b;
    }else{
        printf("Can't divide by zero");
    }
    int rem=a%b;
    printf("%d\n",add);
    printf("%d\n",sub);
    printf("%d\n",mul);
    printf("%.2f\n",div);
    printf("%d\n",rem);
return 0;
}