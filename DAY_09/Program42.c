#include<stdio.h>
//PATTERN 7
int main (){
    int rows;
    int num=1;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=0;j<i;j++){
            printf("%d ",num++);
        }printf("\n");
    }

return 0;
}