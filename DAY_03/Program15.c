#include<stdio.h>
//COMPARISON OF THREE NUMBERS
int main (){
    int a,b,c;
    printf("Enter value of a: ");
    printf("\nEnter value of b: ");
    printf("\nEnter value of c: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a==b && b==c && a==c){
        printf("\nAll three are equal");

    }else if(a==b || b==c || a==c){
        printf("\nTwo numbers are equal");
    }else if(a!=b && b!=c && c!=a){
        printf("\nNone are equal");
    }

return 0;
}