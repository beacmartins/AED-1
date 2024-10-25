#include <stdio.h>
#include <math.h>
#define SUCESSO 0

int main() {
    double valA, valB, valC, delta, mais, menos;

    printf("Entre com valores de A, B e C respectivamente:\n");
    scanf("%lf %lf %lf", &valA, &valB, &valC);

    delta = valB * valB - 4 * valA * valC;

    if (delta < 0) {
        printf("As raizes sao complexas.\n");
    } else {

        mais = (-valB + sqrt(delta)) / (2 * valA);
        menos = (-valB - sqrt(delta)) / (2 * valA);
        
        printf("As raizes da funcao sao: %.2f e %.2f\n", mais, menos);
    }

    return SUCESSO;
}
