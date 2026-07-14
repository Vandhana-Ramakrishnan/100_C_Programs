#include<stdio.h>
//CALCULATOR USING SWITCH
int main () {
    int op;
    int a,b;
    printf("1.ADDITION\n");
    printf("2.SUBTRACTION\n");
    printf("3.MULTIPLICATION\n");
    printf("4.DIVISON\n");
    printf("5.REMAINDER\n");
    printf("Enter value of a: \n");
    scanf("%d",&a);
    printf("Enter value of b: \n");
    scanf("%d",&b);
    printf("Enter the number corresponding to the operation\n");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
        int sum=a+b;
        printf("The sum is %d: \n",sum);
        break;
    case 2:
        int diff=a-b;
        printf("The difference is %d: \n",diff);
        break;
    
    case 3:
        int pro=a*b;
        printf("The product is %d: \n",pro);
        break;
    
    case 4:
        float quo=(float)a/b;
        if(b!=0){
            printf("The quotient is %.2f: \n",quo);
            break;
        }else{
            printf("Zero division is invalid\n");
            break;
        }
        
    
    case 5 :
        int rem=a%b;
        if(b!=0){
            printf("The remainder is %d: \n",rem);
            break;
        }else{
            printf("Zero division is invalid\n");
            break;

        }
    
    default:
        printf("Invalid choice\n");
        break;
    }

return 0;
}