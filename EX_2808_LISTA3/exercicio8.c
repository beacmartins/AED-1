#include <stdio.h>
#include <math.h>
#define SUCESSO 0

int main (){

    float X, Y;

    printf("Digite um valor para X: ");
    scanf("%f", &X);

    if (X <= 1){
        Y = 1;
        printf("O valor de Y eh: %.0f", Y);
    } else if (1 < X && X <= 2){
        Y = 2;
        printf("O valor de Y eh: %.0f", Y);
    } else if (2 < X && X <= 3){
        Y = pow(X, 2);
        printf("O valor de Y eh: %.0f", Y);
    } else if (X > 3){
        Y = pow(X, 3);
        printf("O valor de Y eh: %.0f", Y);
    }


    return SUCESSO;
}