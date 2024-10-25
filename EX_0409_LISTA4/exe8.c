#include <stdio.h>
#define SUCESSO 0

int main (){

   int A, B, prod=0;

   printf("Digite valores inteiros para A e B respectivamente: ");
   scanf("%d %d", &A, &B);

   for(int i = 0; i < B; i++){
    prod += A;
   }

   printf("O produto de %d e %d eh %d", A, B, prod);


    return SUCESSO;
}