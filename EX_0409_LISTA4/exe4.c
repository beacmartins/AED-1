#include <stdio.h>
#define SUCESSO 0

int main (){

    float saldo, saldoFinal, diferenca;

    printf("Entre com o valor do seu saldo: \n");
    scanf("%f", &saldo);

    printf("Entre com o valor de deposito ou saque: \n");
    scanf("%f", &diferenca);

    if (saldo > diferenca){
        saldoFinal = saldo - diferenca; 
        printf("Seu novo salario eh %.2f\n", saldoFinal);
        } else if (saldo < diferenca){
        saldoFinal = saldo + diferenca; 
        printf("Seu novo salario eh %.2f\n", saldoFinal);
        }

    return SUCESSO;
}