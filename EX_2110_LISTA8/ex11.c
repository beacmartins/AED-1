#include <stdio.h>
#include <stdlib.h>
#define SUCESSO 0

void ordenar(int *A, int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (A[i] > A[j]) {
               
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

int kEsimoMenor(int *A, int tamanho, int k) {
    ordenar(A, tamanho); 
    return A[k - 1];    
}

int main() {
    int tamanho;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *A = (int *)malloc(tamanho * sizeof(int));
    if (A == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    printf("Informe os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    int k;

    do {
        printf("Informe um valor k (1 a %d): ", tamanho);
        scanf("%d", &k);
        if (k < 1 || k > tamanho) {
            printf("Valor invalido. Tente novamente.\n");
        }
    } while (k < 1 || k > tamanho);

    int resultado = kEsimoMenor(A, tamanho, k);
    printf("O %d-esimo menor elemento eh: %d\n", k, resultado);

    free(A);

    return SUCESSO;
}
