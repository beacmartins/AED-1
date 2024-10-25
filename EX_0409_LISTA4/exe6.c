#include <stdio.h>
#define SUCESSO 0


int main (){
   
   int idade, fixo=100, adc, valor;

   printf("Digite sua idade: ");
   scanf("%d", &idade);

   do {
   if (idade < 10) {
    adc = 180;
    valor = adc + fixo;
    printf("O valor final a ser pago eh %d\n", valor);
   } else if (idade > 10 && idade <= 30){
    adc = 150;
    valor = adc + fixo;
    printf("O valor final a ser pago eh %d\n", valor);
   } else if (idade > 31 && idade < 60){
    adc = 195;
    valor = adc + fixo;
    printf("O valor final a ser pago eh %d\n", valor);
   } else {
    adc = 230;
    valor = adc + fixo;
    printf("O valor final a ser pago eh %d\n", valor);
   }

   printf("Digite sua idade: ");
   scanf("%d", &idade);
   } while (idade > -1);
   

    return SUCESSO;
}