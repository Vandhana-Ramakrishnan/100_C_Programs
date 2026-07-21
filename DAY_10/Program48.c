#include<stdio.h>
//ZIG ZAG PATTERN
int main (){
    int rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    int num=1;
    for(int i=1;i<=rows;i++){
        int last=num+i-1;
        if(i%2==0){
            for(int j=num;j<=last;j++){
                printf(" %d",j);
            }printf("\n");
        }else{
            for(int j=last;j>=num;j--){
                printf(" %d",j);
            }printf("\n");
        }
        num+=i;
    }

return 0;
}