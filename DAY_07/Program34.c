#include<stdio.h>
//STRONG NUMBER
int main (){
    int n;
    int sum=0;
    printf("Enter value for n: ");
    scanf("%d",&n);
    int temp=n;
    int original=n;
    int f=1;
    while(n>0){
        int c=n%10;
        f=1;
        for(int i=2;i<=c;i++){
            f*=i;
        }
        sum+=f;
        n/=10;
    }
    if(original==sum){
        printf("%d is a strong number",original);
    }else{
        printf("%d is not a strong number",original);
    }
    
}