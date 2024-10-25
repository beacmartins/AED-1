#include <stdio.h> 
#define SUCESSO 0

double calcSerie (double n){
    
    if (n == 2){
        return 0.5;
    } else {
        return (n - 1) / n + calcSerie(n - 2);
    }
}

int main (){

    double N;

    printf("Digite valor de N: ");
    scanf("%lf", &N);

    if ((int) N % 2 == 0){
      printf("O resultado da serie eh: %lf", calcSerie(N));
    } else {
        printf("O N deve ser sempre par.");
    }

    return SUCESSO; 
}