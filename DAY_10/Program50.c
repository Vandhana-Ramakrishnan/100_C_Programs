#include<stdio.h>
//PASCAL'S TRIANGLE
int main (){
    int rows;
    int c;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(int row=0;row<rows+1;row++){
        c=1;
        printf("\n");
        for(int col=0;col<=row;col++){
            printf("%d ",c);
            c=c*(row-col)/(col+1);
        }
    }printf("\n");

return 0;
}