#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SUCESSO 0

int main() {
    int n;

    printf("Informe o valor de n (dimensao da matriz nxn): ");
    scanf("%d", &n);

    float **M = (float **)malloc(n * sizeof(float *));
    for (int i = 0; i < n; i++) {
        M[i] = (float *)malloc(n * sizeof(float));
    }

    if (M == NULL) {
        printf("Erro ao alocar memoria para a matriz.\n");
        return 1;
    }

    srand(time(NULL));

    printf("Matriz %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            M[i][j] = (float)(rand() % 100) / 10; 
            printf("%.1f ", M[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        free(M[i]);
    }

    free(M);

    return SUCESSO;
}
