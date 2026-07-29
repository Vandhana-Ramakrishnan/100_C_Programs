#include<stdio.h>
//HARSHAD NUMBER
int main (){
    int n;
    printf("Enter value for n: ");
    scanf("%d",&n);
    int ori=n;
    int c=0;
    int sum=0;
    int r;
    while(n>0){
        r=n%10;
        c=c*10+r;
        sum+=c;
        n=n/10;
        c=0;
    }printf("%d",sum);
    if(ori%sum==0){
        printf("\n %d is a Harshad Number",ori);
    }else{
        printf("\n %d is not a Harshad Number",ori);
    }
return 0;
}