#include <stdio.h>
#include <math.h>
#define SUCESSO 0

int main (){

    char simb;

    printf("\t<  Sinal de menor\n\t>  Sinal de maior\n\t=  Sinal de igual\n\t*  Outro simbolo\n");

    printf("Entre com um simbolo desejado de acordo com a tabela: ");
    scanf("%c", &simb);

    switch (simb){
    case '<':
        printf("SINAL DE MENOR\n");
    break;
    case '>':
        printf("SINAL DE MAIOR\n");
    break;
    case '=':
        printf("SINAL DE IGUAL\n");
    break;
    case '*':
        printf("OUTRO SIMBOLO\n");
    break;
    }



    return SUCESSO;
}