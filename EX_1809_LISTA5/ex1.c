#include <stdio.h>
#include <math.h>
#define SUCESSO 0

float calcHipotenusa (int a, int b){
    float h;
    h = sqrt(pow(a, 2)+pow(b, 2));
    return h;
}

int main (){

    int A, B;

    printf("Digite valores para A e B: ");
    scanf("%d %d", &A, &B);

    printf("A hipotenusa eh %f.", calcHipotenusa(A, B));

    return SUCESSO;
}