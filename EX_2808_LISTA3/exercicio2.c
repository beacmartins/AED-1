#include <stdio.h>
#include <math.h>
#define SUCESSO 0

int main (){

    float produto=1000, imposto, taxa; 
    char cod;  

    printf("LISTA DE ESTADOS\n");
    printf("\tMG - MINAS GERAIS\n\tSP- SAO PAULO\n\tRJ - RIO DE JANEIRO\n\tES - ESPIRITO SANTO\n");
    printf("Digite o codigo (inicial do estado): \n");
    scanf("%c", &cod);
    

    switch (cod) {
    case 'M': {
        taxa = 7.0/100.0;
        imposto = (taxa * produto) + produto;
        printf("Estado: MINAS GERAIS\tO preco final eh: %.2f", imposto);
        break;
    }
    case 'S': {
        taxa = 12.0/100.0;
        imposto = (taxa * produto) + produto;
        printf("Estado: SAO PAULO\tO preco final eh: %.2f", imposto);
        break;
    }
    case 'R': {
        taxa = 15.0/100.0;
        imposto = (taxa * produto) + produto;
        printf("Estado: RIO DE JANEIRO\tO preco final eh: %.2f", imposto);
        break;
    }
    case 'E': {
        taxa = 8.0/100.0;
        imposto = (taxa * produto) + produto;
        printf("Estado: ESPIRITO SANTO\tO preco final eh: %.2f", imposto);
        break;
    }
    }
    

    return SUCESSO;
}