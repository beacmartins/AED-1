#include <stdio.h>
#define SUCESSO 0
#define TAM 5

void preencheMatriz(int M[TAM][TAM]) {
    printf("Preencha a matriz 5x5:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &M[i][j]);
        }
    }
}

int somaLinha4(int M[TAM][TAM]) {
    int soma = 0;
    for (int j = 0; j < TAM; j++) {
        soma += M[3][j]; 
    }
    return soma;
}

int somaColuna2(int M[TAM][TAM]) {
    int soma = 0;
    for (int i = 0; i < TAM; i++) {
        soma += M[i][1]; 
    }
    return soma;
}

int somaDiagonalPrincipal(int M[TAM][TAM]) {
    int soma = 0;
    for (int i = 0; i < TAM; i++) {
        soma += M[i][i];
    }
    return soma;
}

int somaDiagonalSecundaria(int M[TAM][TAM]) {
    int soma = 0;
    for (int i = 0; i < TAM; i++) {
        soma += M[i][TAM - 1 - i];
    }
    return soma;
}

int somaTotal(int M[TAM][TAM]) {
    int soma = 0;
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            soma += M[i][j];
        }
    }
    return soma;
}

int main() {
    int M[TAM][TAM];

    preencheMatriz(M);

    printf("\nSoma da linha 4: %d\n", somaLinha4(M));
    printf("Soma da coluna 2: %d\n", somaColuna2(M));
    printf("Soma da diagonal principal: %d\n", somaDiagonalPrincipal(M));
    printf("Soma da diagonal secundaria: %d\n", somaDiagonalSecundaria(M));
    printf("Soma de todos os elementos da matriz: %d\n", somaTotal(M));

    return SUCESSO;
}
