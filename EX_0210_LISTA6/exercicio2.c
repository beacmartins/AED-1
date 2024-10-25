#include <stdio.h> 
#define SUCESSO 0

int pou (int X, int Y){
    if (Y == 0){
     return 1;
    } else {
        return (X * pou(X, Y -1));
    }
}

int main (){

    int base, expo;

    printf("Digite o valor da base: ");
    scanf("%d", &base);

    printf("Digite o valor do expoente: ");
    scanf("%d", &expo);

    printf("O resultado de %d elevado a %d eh: %d\n", base, expo, pou(base, expo));

    return SUCESSO;
}