#include <stdio.h> 
#include <math.h>
#define SUCESSO 0

float calcula (float n){
    if (n == 1){
        return 2;
    } else {
        return (1 + n * n) / n + calcula(n - 1); 
    }
}

int main (){

    float N; 
    
    printf("Digite valor de N: ");
    scanf("%f", &N);

    if (N > 0){
        printf("S = %f\n", calcula(N));
    } else {
        printf("Digite valor maior que zero para N");
    }

    return SUCESSO;
}