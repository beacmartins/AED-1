#include <stdio.h>
#include <math.h>
#define SUCESSO 0

int main (){

    float atuSal, novoSal, aumento;
    char opcao;

    printf("\tA = aumento de 8%% no salario\n\tB = aumento de 11%% no salario\n\tC = aumento fixo no salario de R$ 350,00 ou de R$ 200,00\n");
    printf("Digite o codigo de opcao desejada de acordo com o menu: \n");
    scanf("%c", &opcao);
    printf("Digite seu salario atual:");
    scanf("%f", &atuSal);

    switch (opcao){
    case 'A':
        aumento = 8.0/100.0;
        novoSal = (atuSal * aumento) + atuSal;
        printf("Seu novo salario eh: R$%.2f", novoSal);
    break;
    case 'B':
        aumento = 11.0/100.0;
        novoSal = (atuSal * aumento) + atuSal;
        printf("Seu novo salario eh: R$%.2f", novoSal);
    break;
    case 'C':
       if (atuSal <= 1000){
        aumento = 350;
        novoSal = atuSal + aumento;
        printf("Seu novo salario eh: R$%.2f", novoSal);
       } else if (atuSal > 1000){
        aumento = 200;
        novoSal = atuSal + aumento;
        printf("Seu novo salario eh: R$%.2f", novoSal);
       }
    break;
    }


    return SUCESSO;
}