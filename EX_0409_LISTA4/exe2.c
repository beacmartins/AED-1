#include <stdio.h>
#define SUCESSO 0

int main (){

    int numeros;
    
    printf("Entre com um numero positivo: \n");
    scanf("%d", &numeros);

    if (numeros <= 0){
        printf("Numero nao tem raiz, entre com um valor positivo e maior que zero.");
    }

    do {
        double cubo = pow(numeros, 3);
        printf("O cubo de %d eh %.2lf\n", numeros, cubo);

        printf("Entre com outro numero positivo: \n");
        scanf("%d", &numeros);
    } while (numeros % 7 != 0);


    return SUCESSO;
}