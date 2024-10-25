#include <stdio.h> 
#define SUCESSO 0

void Dec2Bin(int decimal) {
    if (decimal > 1) {
        Dec2Bin(decimal / 2); 
    }
    printf("%d", decimal % 2); 
}

int main() {
    int n;

    printf("Digite um numero na base decimal: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Nao eh possivel converter um numero negativo para binario.\n");
    } else {
        printf("A representacao em base binaria de %d eh: ", n);
        Dec2Bin(n);
        printf("\n"); 
    }

    return SUCESSO;
}
