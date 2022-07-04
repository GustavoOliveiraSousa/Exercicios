#include <stdio.h>
int main(){
int a; 
printf("digite um numero");
scanf("%d", &a);
printf("o numero selecionado e:");
if(a<0){
    printf("\nNegativo");
    if(a%2==0) printf(" par");
    else printf(" impar");
    }else{printf("\nPositivo");
        if(a%2==0) printf(" par");
     else printf(" impar");}
    }