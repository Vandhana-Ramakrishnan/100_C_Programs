#include<stdio.h>
//TRIANGLE INEQUALITY CHECKER
int main (){
    int a,b,c;
    printf("Enter side a of triangle: \n");
    scanf("%d",&a);
    printf("Enter side b of triangle: \n");
    scanf("%d",&b);
    printf("Enter side c of triangle: \n");
    scanf("%d",&c);
    if(a+b>c && b+c>a && a+c>b){
        printf("It can be a triangle\n");
    }else{
        printf("It can't form a triangle\n");
    }

return 0;
}