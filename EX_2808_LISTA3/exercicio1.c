#include <stdio.h>
#include <math.h>
#define SUCESSO 0

int main () {
    
    float num1, num2, num3; 

    printf("Digite tres numeros reais: \n");
    scanf("%f %f %f", &num1, &num2, &num3);

//verifica o maior
    if (num1 > num2 && num1 > num3) {
       printf("O %.2f eh o maior entre os numeros digitados\n", num1);
    } else if (num2 > num1 && num2 > num3) {
       printf("O %.2f eh o maior entre os numeros digitados\n", num2);
    } else if (num3 > num1 && num3 > num2){
       printf("O %.2f eh o maior entre os numeros digitados\n", num3);
    }

//verifica o menor
    if (num1 < num2 && num1 < num3) {
        printf("O %.2f eh o menor entre os numeros digitados\n", num1);
    } else if (num2 < num1 && num2 < num3) {
        printf("O %.2f eh o menor entre os numeros digitados\n", num2);
    } else if (num3 < num1 && num3 < num2){
        printf("O %.2f eh o menor entre os numeros digitados\n", num3);
    }

//verifica o do meio
    if (num2 < num1 && num1 < num3) {
        printf("O %.2f eh o do meio\n", num1);
    } else if (num1 < num2 && num2 < num3) {
        printf("O %.2f eh o do meio\n", num2);
    } else if (num1 < num3 && num3 < num2){
        printf("O %.2f eh o do meio\n", num3);
    }

    return SUCESSO;
}