#include<stdio.h>
//POSITIVE NEGATIVE OR ZERO CHECK
int main() {
    int num;
    printf("\nEnter a number: \n");
    scanf("%d",&num);
    if(num>0){
        printf("\nNumber is positive %d\n",num);
    }else if(num<0){
        printf("\nNumber is negative %d\n",num);
    }else{
        printf("\nNumber is zero %d\n",num);
    }

return 0;
}