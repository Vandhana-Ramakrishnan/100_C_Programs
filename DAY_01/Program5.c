#include<stdio.h>
//MARKS 
int main() {
    printf("\nEnter your name: \n");
    char name[30];
    scanf("%s",&name);
    printf("\nEnter register number: \n");
    char reg[30];
    scanf("%s",&reg);
    printf("\nEnter marks in phy\n: ");
    int phy;
    scanf("%d",&phy);
    printf("\nEnter amrks in chem\n: ");
    int chem;
    scanf("%d",&chem);
    printf("\nEnter marks in math\n: ");
    int math;
    scanf("%d",&math);
    int total=phy+chem+math;
    float avg=(float)total/3;
    float per=avg*100;
    printf("\nTotal marks:%d\n",total);
    printf("\nAverage marks:%.2f\n",avg);
    printf("\nPercentage %.2f",per);


return 0;
}