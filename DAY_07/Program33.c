#include<stdio.h>
#include<math.h>

int main(){
    int n;
    int sum=0;
    printf("Enter value for n: ");
    scanf("%d",&n);
    int t=n;
    int or=n;
    int c=0;
    while(n>0){
        int d=n%10;
        n/=10;
        c+=1;
    }
    printf("\nLength is: %d",c);
    while(t>0){
        int e=t%10;
        int f=pow(e,c);
        sum+=f;
        t/=10;
    }
    if(or==sum){
        printf("\n%d is an armstrong number",or);
    }else{
        printf("\n%d is not an armstrong number",or);
    }

return 0;
}