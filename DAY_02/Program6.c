#include<stdio.h>
//Largest of three numbers
int main() {
    int a,b,c;
    printf("\nEnter value of a: \n");
    scanf("%d",&a);
    printf("\nEnter value of b: \n");
    scanf("%d",&b);
    printf("\nEnter value of c: \n");
    scanf("%d",&c);
    printf("\nThe values are: %d,%d,%d\n",a,b,c);

    if(a>=b && a>=c){
        printf("\nA is the largest %d",a);
    }else if (b>=a && b>=c){
        printf("\nB is the largest %d",b);
    }else{
        printf("\nC is the greatest %d",c);

    }
    
return 0;
}