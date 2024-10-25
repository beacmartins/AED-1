#include <stdio.h> 
#define SUCESSO 0

int soma (int num){
   if (num <= 0){
    return 0;
   } else {
    return  num % 10 + soma(num / 10);
   }
}

int main (){

    int NUM;
    
    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &NUM);

    if (NUM != 0){
    printf("A soma dos digitos do numero %d eh: %d\n", NUM, soma(NUM));
    } else {
        printf("O numero deve ser estritamente positivo.");
    }

    return SUCESSO;
}