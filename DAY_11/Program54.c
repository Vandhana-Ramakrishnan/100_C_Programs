#include<stdio.h>
//LCM OF 2 numbers
int main (){
    int a,b;
    printf("Enter value for a: ");
    scanf("%d",&a);
    printf("Enter value for b: ");
    scanf("%d",&b);
    int s,l;
    if(a>b){
        s=b;
        l=a;
    }else{
        s=a;
        l=b;
    }
    int i=l;
    while(i>=l){
        if(i%l==0 && i%s==0){
            printf("\nLCM %d",i);
            break;
        }else{
            i++;
        }

    }
return 0;
}