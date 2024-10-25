#include <stdio.h>
#include <math.h>
#define SUCESSO 0

int MDC (int num1, int num2){
    int auxiliar;
    while (num2 != 0) {
        auxiliar = num2;
        num2 = num1 % num2;
        num1 = auxiliar;
    }
    return num1;
}

int MMC (int a, int b){
    return (a * b) / MDC(a, b);
}

int MDC3 (int num1, int num2, int num3) {
    return MDC(MDC(num1, num2), num3);
}

int main (){
    int NUM1, NUM2, NUM3;
    int A, B;
    int cod;

    printf("\t1-MMC\n\t2-MDC\n\t3-Sair\n");
    printf("Opcao: ");
    scanf("%d", &cod);

    while (cod != 3){
     if (cod == 1){
        printf("Dois valores para mmc: \n");
        scanf("%d %d", &A, &B);
        printf("O MMC de %d e %d eh: %d\n", A, B, MMC(A, B));
     } else if (cod == 2){
        printf("Digite tres numeros inteiros para calcular o MDC: ");
        scanf("%d %d %d", &NUM1, &NUM2, &NUM3);
        printf("O MDC de %d, %d e %d eh: %d\n", NUM1, NUM2, NUM3, MDC3(NUM1, NUM2, NUM3));
     }
    }

    return SUCESSO;
}