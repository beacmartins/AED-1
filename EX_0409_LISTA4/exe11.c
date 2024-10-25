#include <stdio.h>
#define SUCESSO 0

int main() {

    int comeco = 500;  
    int final = 2100;   
    int soma = 0;        
    
    
    for (int i = comeco; i <= final; i++) {
       
        if (i % 2 != 0 && i % 3 == 0) {
            soma += i;  
        }
    }
    
    printf("A soma de todos os numeros impares multiplos de 3 entre %d e %d eh: %d\n", comeco, final, soma);


    return SUCESSO;
}