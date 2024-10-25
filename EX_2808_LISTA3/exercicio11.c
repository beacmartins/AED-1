#include <stdio.h>
#include <math.h>
#define SUCESSO 0

int main (){

    int velMAX, velAtual;
    float diferenca, multa;

    diferenca = (velAtual - velMAX);

    printf("Entre com a velocidade max da avenida: \n");
    scanf("%d", &velMAX);

    printf("Em qual velocidade o motorista estava dirigindo: \n");
    scanf("%d", &velAtual);

    if (velAtual <= velMAX){
       printf("Motorista respeitou a lei.");
    } else if (diferenca <= 10 && diferenca != 0){
       multa = 50;
       printf("O valor de multa a ser pago por ultrapassar em ate 10km o limite de velocidade eh R$%.2f", multa);
    } else if (diferenca >= 11 && diferenca <= 30){
       multa = 100;
       printf("O valor de multa a ser pago por ultrapassar de 11 a 30km o limite de velocidade eh R$%.2f", multa);
    } else if (diferenca > 30){
       multa = 200;
       printf("O valor de multa a ser pago por ultrapassar mais que 30km do limite de velocidade eh %.2f", multa);
    }

    

    return SUCESSO;
}