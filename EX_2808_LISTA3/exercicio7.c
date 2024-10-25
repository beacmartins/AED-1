#include <stdio.h>
#include <math.h>
#define SUCESSO 0

int main (){
   
   int folhas;
   float xerox, valor;

   printf("\tXerox R$ 0,25 unidade\n");
   printf("Quantas copias deseja?: ");
   scanf("%d", &folhas);

   if (folhas <= 100){
   xerox = 0.25;
   valor = folhas * xerox;
   printf("O valor a ser pago eh: %.2f", valor);
   } else if (folhas > 100){
   xerox = 0.20;
   valor = folhas * xerox;
   printf("O valor a ser pago eh: %.2f", valor);
   } else {

   }

    return SUCESSO;
}