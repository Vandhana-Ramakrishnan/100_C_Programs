#include<stdio.h>
//CUBES OF NUMBERS TILL N
int main (){
    int n;
    printf("Enter the value for n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("\n%d",i*i*i);
    }

return 0;
}