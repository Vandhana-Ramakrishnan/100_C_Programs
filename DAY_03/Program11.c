#include<stdio.h>
//ALPHABET,DIGIT, OR SPECIAL CHARACTER CHECK

int main() {
    char s;
    printf("Enter your character: \n");
    scanf(" %c",&s);
    if(s>='A' && s<='Z'){
        printf("It is an uppercase alphabet\n");

    }else if(s>='a' && s<='z'){
        printf("It is a lowercase alphabet\n");

    }else if(s>=48 && s<=57){
        printf("It is a digit\n");
    }else if(s==32){
        printf("It is a space\n");
    }


return 0;
}