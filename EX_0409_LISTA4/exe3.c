#include <stdio.h>
#define SUCESSO 0

int main (){

   int pessoas;
   
   printf("Quantas pessoas estavam presentes?\n");
   scanf("%d", &pessoas);

   for (int partidas=1; partidas <= 10; partidas++){
    if (pessoas < 1000){

        printf("menos que 1.000: publico baixo\n");

    } else if  (pessoas < 10000) {

        printf("entre 1.001 e 10.000: publico medio\n");

    } else {

        printf("acima de 10.000: publico bom\n");

    }
    printf("Quantas pessoas estavam presentes?\n");
    scanf("%d", &pessoas);
   }

   return SUCESSO;
}