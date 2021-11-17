#include<stdio.h>

int main(){
    char char_ord;
    printf("Enter a Character : ");
    scanf("%c",&char_ord);
    int ord = (int)char_ord;

    switch(ord){
    case 65 ... 90:
        printf("%c : Uppercase Alphabet",char_ord);
        break;
    case 97 ...122:
        printf("%c : lowercase Alphabet",char_ord);
        break;
    
    default:
        printf("%c : Special Character",char_ord);
        break;
        

    }




    
   
    return 0;
}