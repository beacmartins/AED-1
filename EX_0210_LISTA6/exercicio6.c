#include <stdio.h> 
#define SUCESSO 0

int calcRaiz(int n, int i) {
    if (n < 0) { 
        return -1; //nao pode ter raiz de negativo
    }
    if (n == 0) {
        return 0; // pq raiz de 0 eh 0
    }
    if (n < i) {
        return 0; // i eh de impar
    }
    
    return 1 + calcRaiz(n - i, i + 2);
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo para calcular a raiz quadrada: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Não eh possível calcular a raiz quadrada de um número negativo.\n");
    } else {
        int result = calcRaiz(n, 1);
        printf("A raiz quadrada de %d eh aproximadamente %d\n", n, result);
    }

    return SUCESSO;
}
