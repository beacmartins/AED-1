#include <stdio.h>
#include <math.h>
#define SUCESSO 0

int verificaSinal (int num){
    if (num < 0){
        printf("Negativo\n");
        return 0;
    } else {
        printf("Positivo\n");
        return 1;
}
}

int main (){
    int N, Num;

    printf("Digite valor para N: ");
    scanf("%d", &N);

    for(int i=1; i <= N; i++){
       printf("Digite um num: ");
       scanf("%d", &Num);

       verificaSinal(Num);
    }

    printf("Digite valor para N: ");
    scanf("%d", &N);

    return SUCESSO;
    
}