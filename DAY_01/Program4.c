#include<stdio.h>
//BILL GENERATOR
int main() {
    printf("\nEnter item name: \n");
    char item[30];
    scanf("%s",&item);
    printf("\nEnter quantity: \n");
    int q;
    scanf("%d",&q);
    printf("\nEnter price per item: \n");
    int p;
    scanf("%d",&p);
    printf("\nEnter GST percentage\n");
    int gst;
    scanf("%d",&gst);

    int tp=p*q;
    float gp=(float)gst/100*tp;
    float fp=tp+gp;
    printf("\nTotal price %d\n",tp);
    printf("\nGST price %.2f\n",gp);
    printf("\nFinal Price %.2f\n",fp);


return 0;
}