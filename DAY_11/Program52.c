#include<stdio.h>
//GCD of a number
int main (){
    int a,b;
    printf("Enter values for a,b");
    scanf("%d",&a);
    printf("Enter values for a,b");
    scanf("%d",&b);
    int s,l,c;
    int count=0;
    if(a<b){
        s=a;
        l=b;
    }else{
        s=b;
        l=a;
    }
    for(int i=2;i<=s;i++){
        if(s%i==0 && l%i==0){
            count++;
            //printf("GCD is %d",i);
            c=i;
        }
    
    }if(count==0){
        printf("1 is the GCD");
    }else{
         printf("\nGCD is %d",c);   
    }

    return 0;
}