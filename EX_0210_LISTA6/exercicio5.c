#include <stdio.h> 
#define SUCESSO 0

void pares (int N){
    if (N > 0) { 
        printf("%d\n", N); 
        pares(N - 2); 
    }
}


int main (){

    int n;

    printf("Digite valor n:");
    scanf("%d", &n);

    if (n <= 0){
        printf("Digite numero positivo para N.");
    } else {
      pares(n);
    }

    return SUCESSO;
}