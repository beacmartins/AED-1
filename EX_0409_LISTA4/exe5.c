#include <stdio.h>
#define SUCESSO 0

int main() {
    int pessoas = 30;
    float peso, pesomais = 0;
    int calc = 0;
    float maiorpeso = 0, media;

    for (int i = 0; i < pessoas; i++) {
        printf("Digite o peso da pessoa %d (em kg): ", i + 1);
        scanf("%f", &peso);

        if (peso > 60) {
            pesomais += peso;
            calc++;
        }

        if (peso > maiorpeso) {
            maiorpeso = peso;
        }
    }

    media = (calc > 0) ? (pesomais / calc) : 0;

    printf("A média aritmética dos pesos das pessoas com mais de 60 kg é: %.2f kg\n", media);
    printf("O peso da pessoa mais pesada é: %.2f kg\n", maiorpeso);

    return SUCESSO;
}
