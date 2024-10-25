#include <stdio.h>
#define SUCESSO 0

int main() {
    int N;        
    double S = 0.0;

  
    printf("Digite o valor de N (deve ser um numero impar): ");
    scanf("%d", &N);
    
    if (N % 2 == 0) {
        printf("O valor de N deve ser um numero impar.\n");
        return 1; 
    }
    
   
    for (int i = 1; i <= N; i += 2) {
        // Alternar o sinal
        if (((i - 1) / 2) % 2 == 0) {
            S += 4.0 / i;  // Adiciona quando o índice é par
        } else {
            S -= 4.0 / i;  // Subtrai quando o índice é ímpar
        }
    }
    
    printf("O valor da serie eh: %lf\n", S);
    
    return SUCESSO;
}
