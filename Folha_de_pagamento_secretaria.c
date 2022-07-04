#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(void){
    //VARIÁVEIS
    setlocale(LC_ALL, "");
    FILE *pont_sec;
    char palavra[50];
    pont_sec = fopen("Folha_Contratados.txt", "a");
    int opcao=0;
    
    //INICIANDO A REPETIÇÃO PARA NO CASO DE MAIS DE UM FUNCIONÁRIO  
    while (opcao!=1){
        
    //VARIÁVEIS INTERNAS 
    int diaria=0, diaria_inteira=0, meia_diaria=0, salario_meio=0, salario_todo=0, salario_completo=0;
    
    //ADICIONANDO VALORES NAS VARIÁVEIS
    printf ("Digite o nome do funcionario: ");
    scanf("%s", palavra); //NÃO PRECISA DO "&", POIS NÃO SE USA PARA VETORES E MATRIZES
    
    printf ("Digite o valor da diaria do funcionario: ");
    scanf("%d", &diaria);
    
    printf ("Digite a quantidade de diarias inteiras: ");
    scanf("%d", &diaria_inteira);
    
    // printf ("Digite a quantidade de meia diarias: ");
    // scanf("%d", &meia_diaria);
    // //SEPARADOR PARA FICAR BONITO
    printf ("-----------------------------------------------\n");
    
    //FAZENDO O CÁLCULO DE SAÍDA
    // salario_meio =(diaria*meia_diaria)/2;
    salario_todo=diaria*diaria_inteira;
    salario_completo=salario_todo+salario_meio;
    
    //IMPIMINDO NO ARQUIVO DESTINO
    fprintf(pont_sec, "%s = R$ %d\n", palavra, salario_completo);
    
    //CONTROLADOR DE REPETIÇÃO DO PROGRAMA
    printf ("Deseja continuar(0) ou interromper (1): ");
    scanf("%d", &opcao);
    printf ("-----------------------------------------------\n");
}
    fclose(pont_sec);
    //SEPARADOR PARA FICAR BONITO
    printf ("-----------------------------------------------\n");
    printf("Arquivo criado com sucesso!\n");
    //SEPARADOR PARA FICAR BONITO
    printf ("-----------------------------------------------\n");
    getch();
    return 0;
}