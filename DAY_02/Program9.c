#include<stdio.h>
//LEAP YEAR CHECKER
int main() {
    int year;
    printf("\nEnter the year: ");
    scanf("%d",&year);
    if(year%400==0){
        printf("\nGiven year is leap year %d\n",year);
    }else if(year%4==0 && year%100!=0){
        printf("\nGiven year is leap year %d\n",year);
    }else{
        printf("\nGive year is not a leap year %d\n",year);
    }
return 0;
}