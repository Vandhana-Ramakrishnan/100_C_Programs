#include<stdio.h>
//ODD OR EVEN CHECK
int main() {
    int num;
    printf("\nEnter the value of num: \n");
    scanf("%d",&num);
    if(num%2==0){
        printf("\nThe number is even %d\n",num);
    }else{
        printf("\nThe number is odd %d\n",num);
    }

return 0;
}