#include <stdio.h>
#include <math.h>
#define SUCESSO 0

int main () {

    char cod;
    int X, Y, Z;
    double geo, pond, harm, arit;
 
   printf("\tW    \tTipo de media\n\t1 -     Geometrica\n\t2 -     Ponderada\n\t3 -     Harmonica\n\t4 -     Aritmetica\n");
   printf ("Digite o codigo de W para a operacao desejada: ");
   scanf("%c", &cod);

   printf("Digite valores iteiros positivos para X, Y e Z, respectivamente:\n");
   scanf("%d %d %d", &X, &Y, &Z);

   if (X < 0 || Y < 0 || Z < 0){
    printf("Valores invalidos, digite apenas valores positivos.");
   }

   switch (cod) {
   case '1':
    geo = sqrt(X * Y * Z); 
    printf("\tMedia Geometrica = %lf", geo);
   break;
   case '2':
    pond = (X + (2 * Y) + (3 * Z)) / 6; 
    printf("\tMedia Ponderada = %lf", pond);
   break;
   case '3':
    harm = 3 / ((1 / X) + (1 / Y) + (1 / Z)); 
    printf("\tMedia Harmonica = %lf", harm);
   break;
   case '4':
    arit = (X + Y + Z) / 3; 
    printf("\tMedia Aritmetica = %lf", arit);
   break;
   
   default:
   printf("Digite um codigo valido disposto na tabela.");
    break;
   }

    return SUCESSO;
}