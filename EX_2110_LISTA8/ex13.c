#include <stdio.h>
#define SUCESSO 0

int main() {
    int M[4][4];
    int somaAbaixoDiagonal = 0;

    printf("Preencha a matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &M[i][j]);
        }
    }

    printf("\nElementos da diagonal principal:\n");
    for (int i = 0; i < 4; i++) {

        printf("%d ", M[i][i]);
        
        for (int j = 0; j < i; j++) {
            somaAbaixoDiagonal += M[i][j];
        }
    }

    printf("\n\nSoma dos elementos abaixo da diagonal principal: %d\n", somaAbaixoDiagonal);

    return SUCESSO;
}
