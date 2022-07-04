#include <stdio.h>
int main(){
int a; 
printf("escreva um numero:");
scanf("%d", &a);

const char* resultado=
    (a<0)?
        ((a%2==0)?"\n Negativo Par":"\n Negativo Impar")
    :   ((a%2==0)?"\n Positivo Par":"\n Positivo Impar");

printf(resultado);
}