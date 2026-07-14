#include<stdio.h>
//ELECTRICITY BILL CALCULATOR
int main (){
    int units;
    printf("Enter units consumed: \n");
    scanf("%d",&units);
    printf("Energy charges is Rs 100\n");
    float fixed_charge;
    float total_bill;
    float energy_charge;
    if(units<=100){
        fixed_charge=1.5;
        energy_charge=units*fixed_charge;
        total_bill=100+energy_charge;
        printf("Total bill amt is %.2f: \n",total_bill);
    }else if(units>100 && units <=200){
        fixed_charge=2.5;
        energy_charge=units*fixed_charge;
        total_bill=100+energy_charge;
        printf("Total bill amt is %.2f: \n",total_bill);
    }else{
        fixed_charge=4.0;
        energy_charge=units*fixed_charge;
        total_bill=100+energy_charge;
        printf("Total bill amt is %.2f: \n",total_bill);
    }

return 0;
}