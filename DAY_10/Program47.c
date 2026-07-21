#include<stdio.h>
//HOURGLASS
int main (){
    int rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    //UPPER HALF
    for(int i=2*rows-1;i>1;i-=2){
        // Spaces
        for (int space = 0; space <(2*rows-1- i)/2; space++) {
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("*");
        }printf("\n");
    }
    //LOWER HALF
    for(int i=1;i<=2*rows-1;i+=2){
        // Spaces
        for (int space = 0; space <(2*rows-1- i)/2; space++) {
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("*");
        }printf("\n");
    
    }

return 0;
}