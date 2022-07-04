#include <stdio.h>
#include <stdlib.h>
int main()
{
    float n1, n2, n3, media;
    int cont;
    for (cont=1;cont<=40;cont++)
    {   
        printf("\nDigite a primeira nota: ");
        scanf("%f",&n1);
        printf("Digite a segunda nota: ");
        scanf("%f",&n2);
        printf("Digite a terceira nota: ");
        scanf("%f",&n3);
        media = (n1+n2+n3)/3;
        printf("---------------------------------------\n");
        if(media>=7)   
        {
            printf("aluno aprovado com media: %.2f\n", media); 
            printf("---------------------------------------\n"); 
        }
        else
        {
            printf("aluno reprovado com media: %.2f\n", media);
            printf("---------------------------------------\n");
        }
    }
    return 0;
}

