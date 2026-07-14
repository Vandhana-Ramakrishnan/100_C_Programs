#include<stdio.h>
//STUDENT GRADE CALCULATOR
int main() {
    int emt,ae,sns,dld,ptrp;
    printf("Enter marks for electromagnetic theory: \n");
    scanf("%d",&emt);
    printf("Enter marks for analog electromics: \n");
    scanf("%d",&ae);
    printf("Enter marks for signals and systems: \n");
    scanf("%d",&sns);
    printf("Enter marks for digital logic design: \n");
    scanf("%d",&dld);
    printf("Enter marks for ptrp: \n");
    scanf("%d",&ptrp);
    int total=emt+ae+sns+dld+ptrp;
    printf("Total marks secured is %d: \n",total);
    float avg=(float)total/5;
    printf("Average is %.2f: \n",avg);
    if(avg>=90){
        printf("A GRADE\n");
    }else if(avg>=80 && avg<90){
        printf("B GRADE\n");
    }else if(avg>=70 && avg<80){
        printf("C GRADE\n");
    }else if(avg>=60 && avg<70){
        printf("D GRADE\n");
    }else if(avg>=50 && avg<60){
        printf("E GRADE");
    }else{
        printf("F GRADE");
    }

return 0;
}