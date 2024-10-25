#include <stdio.h>
#include <math.h>
#define SUCESSO 0

float esse (int n){
    float S=0;
    for(int i = 1; i <= n; i++){
        int numerador, denominador;
        numerador = n * n + 1;
        denominador = n + 3;
      
        S = numerador / denominador;
      }
        return S;
}

int main (){
    int N; 

    printf("Digite valor positivo para N: ");
    scanf("%d", &N);

    printf("S: %.2f", esse(N));

    return SUCESSO;
}