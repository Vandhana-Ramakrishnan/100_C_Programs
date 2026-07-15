#include<stdio.h>
//Sum of n natural numbers
int main() {
    int n,sum;
    sum=0;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    for (int i = 0; i<=n; i++){
        sum+=i;
    }printf("%d\n",sum);
    

return 0;
}