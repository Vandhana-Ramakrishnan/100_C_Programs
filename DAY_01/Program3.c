#include<stdio.h>
//SWAP NUMBERS WITHOUT 3RD VARIABLE
int main() {
    int a,b;
    printf("\nEnter value of a:\n ");
    scanf("%d",&a);
    printf("\nEnter value of b:\n ");
    scanf("%d",&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("Numbers after swapping %d %d",a,b);
return 0;
}