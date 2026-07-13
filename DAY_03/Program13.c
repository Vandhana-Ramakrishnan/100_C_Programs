#include<stdio.h>
//ABSOLUTE VALUE OF A NUMBER
int main (){
    int num,abs;
    printf("Enter your number: ");
    scanf("%d",&num);
    if(num>=0){
        printf("Absolute value of %d is %d",num,num);
    }else{
        abs=0-num;
        printf("Absolute value of %d is %d",num,abs);
    }

return 0;
}