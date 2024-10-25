#include <stdio.h>
#define SUCESSO 0

int main() { 

    double S = 0.0; 
    int i;
    
    
    for (i = 1; i <= 10; i++) {
        S += (double)i / (i * i); 
    }
    
    
    printf("O valor final de S é: %.6f\n", S);


  return SUCESSO;
}