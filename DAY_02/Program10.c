#include<stdio.h>
//VOWEL CHECKER
int main() {
    char a;
    printf("\nEnter your letter\n");
    scanf("%c",&a);
    if(a=='a'|| a=='i' || a=='e' || a=='o' || a=='u'){
        printf("\nGiven letter is a vowel %c\n",a);
    }else{
        printf("\nGiven letter is a consonant %c\n",a);
    }

return 0;
}