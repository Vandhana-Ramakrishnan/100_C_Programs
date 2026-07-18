#include<stdio.h>
//PATTERN 5
/*
int main (){
    int rows;
    char c='A';
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=0;j<i;j++){
            printf("%c",c+j);
        }printf("\n");
    }
return 0;
}
*/

//USING ASCII VALUES
/*
int main (){
    int rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=0;j<i;j++){
            printf("%c",65+j);
        }printf("\n");
    }
return 0;
}
*/

//BONUS
int main (){
    int rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=0;j<i;j++){
            printf("%d",i);
        }printf("\n");
    }
return 0;
}