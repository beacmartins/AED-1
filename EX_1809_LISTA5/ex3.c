#include <stdio.h>
#include <math.h>
#define SUCESSO 0

void medias (int num1, int num2,int num3, char letra){
    if (letra == 'A'){
        float arit;
        arit = (num1 + num2 + num3) / 3;
        printf("Media aritmetica: %f", arit);
    } else if (letra == 'P'){
        float pond;
        pond = ((num1 * 5) + (num2 * 3) + (num3 * 2)) / (5 + 3 + 2);
        printf("Media ponderada: %f", pond);
    } else {
        printf("Não é possível fazer nenhum cálculo");
    }
}

int main (){

    int NUM1, NUM2, NUM3;
    char LETRA;

    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &NUM1, &NUM2, &NUM3);

    printf("\tA - Media aritmetica\n\tP - Media ponderada\n");
    printf("Digite a letra para operacao desejada: \n");
    scanf("%c", &LETRA);
    scanf("%c", &LETRA);

    medias(NUM1, NUM2, NUM3, LETRA);
    
    return SUCESSO;
}