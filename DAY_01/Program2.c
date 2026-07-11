//Temperature Convertor 
#include<stdio.h>

int main() {
    printf("\n TEMPERATURE\n");
    char temp;
    printf("\n Enter temp in celcuis or fahrenheit\n");
    scanf("%c",&temp);
    if(temp=='c'){
        float t;
        printf("\nEnter temp: \n");
        scanf("%f",&t);
        float f=(9.0/5.0)*t+32;
        printf("Temp in fahreinheit is %.2f",f);
    }
    else if (temp=='f'){
        printf("\n Enter temp: ");
        float t;
        scanf("%f",&t);
        float c=(t-32)*(5.0/9.0);
        printf("Temp in celcuis is %.2f",c);

    }  
return 0;
}