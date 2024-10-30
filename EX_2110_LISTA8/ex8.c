#include <stdio.h>
#define SUCESSO 0

int main() {

    int valorInteiro;
    float valorReal;
    char caractere;

   
    int *pValorInteiro = &valorInteiro;
    float *pValorReal = &valorReal;
    char *pCaractere = &caractere;

    printf("Digite um valor inteiro: ");
    scanf("%d", pValorInteiro);
    printf("Digite um valor real: ");
    scanf("%f", pValorReal);
    printf("Digite um caractere: ");
    scanf(" %c", pCaractere); 

   
    printf("\nAntes da alteracao:\n");
    printf("Valor Inteiro: %d, Endereço: %p\n", valorInteiro, (void*)&valorInteiro);
    printf("Valor Real: %.2f, Endereço: %p\n", valorReal, (void*)&valorReal);
    printf("Caractere: %c, Endereço: %p\n", caractere, (void*)&caractere);
    
    printf("Ponteiro para Valor Inteiro: %d, Endereço: %p\n", *pValorInteiro, (void*)pValorInteiro);
    printf("Ponteiro para Valor Real: %.2f, Endereço: %p\n", *pValorReal, (void*)pValorReal);
    printf("Ponteiro para Caractere: %c, Endereço: %p\n", *pCaractere, (void*)pCaractere);

    
    printf("\nDigite um novo valor inteiro: ");
    scanf("%d", pValorInteiro);
    printf("Digite um novo valor real: ");
    scanf("%f", pValorReal);
    printf("Digite um novo caractere: ");
    scanf(" %c", pCaractere);

   
    printf("\nApos a alteracao:\n");
    printf("Valor Inteiro: %d, Endereço: %p\n", valorInteiro, (void*)&valorInteiro);
    printf("Valor Real: %.2f, Endereço: %p\n", valorReal, (void*)&valorReal);
    printf("Caractere: %c, Endereço: %p\n", caractere, (void*)&caractere);
    
    printf("Ponteiro para Valor Inteiro: %d, Endereço: %p\n", *pValorInteiro, (void*)pValorInteiro);
    printf("Ponteiro para Valor Real: %.2f, Endereço: %p\n", *pValorReal, (void*)pValorReal);
    printf("Ponteiro para Caractere: %c, Endereço: %p\n", *pCaractere, (void*)pCaractere);

    return SUCESSO;
}
