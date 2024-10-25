#include <stdio.h>
#define SUCESSO 0

int main() {
    int determinante, i, valor;


    printf("Digite o numero que determinara quantos valores a serem lidos: ");
    scanf("%d", &determinante);

    if (determinante <= 0) {
        printf("O numero de valores deve ser maior que zero.\n");
    }

    printf("Digite %d valores:\n", determinante);
    for (i = 0; i < determinante; i++) {
        scanf("%d", &valor);
        
        int fat=1;

        for(int j=0; j < valor; j++){
            fat = fat * (valor - j); 
        }

        printf("Valor %d: %d\n", i + 1, valor);
        printf("Fatorial= %d", fat);
    }

    return SUCESSO;
}