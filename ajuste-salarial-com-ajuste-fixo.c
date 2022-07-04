#include <stdio.h>
#include <stdlib.h>
int main()
{
    float salario_antigo, salario_novo, maior_salario, reajuste;
    int cont;
    maior_salario=0;
    printf("Digite o reajuste em porcentagem: ");
    scanf("%f",&reajuste);
    for (cont=1;cont<=5;cont++)
    {   
        printf("\nDigite o salario atual: ");
        scanf("%f",&salario_antigo);
        salario_novo = salario_antigo+(salario_antigo*(reajuste/100));
        printf("o novo salario é:%.2f\n", salario_novo);
        printf("---------------------------------------\n");
        if(salario_novo>=maior_salario)   
        {
            maior_salario=salario_novo; 
        }
    }

printf("o valor do maior salario depois do reajuste foi:: %.2f\n", maior_salario);
printf("---------------------------------------\n");
    return 0;
}

