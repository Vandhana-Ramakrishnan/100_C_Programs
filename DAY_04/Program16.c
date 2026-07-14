#include<stdio.h>
#include<math.h>
//QUADRATIC EQN 
int main (){
    int a,b,c;
    float x1,x2;
    printf("Enter the value of a: \n");
    scanf("%d",&a);
    printf("Enter the value for b: \n");
    scanf("%d",&b);
    printf("Enter the value for c: \n");
    scanf("%d",&c);
    printf("The quadratic eqn is %dx^2 + %dx + %d\n",a,b,c);
    float d=b*b-4*a*c;
    x1=(-b+sqrt(d))/2*a;
    x2=(-b-sqrt(d))/2*a;
    printf("The roots for the eqn are %.2f and %.2f",x1,x2);
return 0;
}