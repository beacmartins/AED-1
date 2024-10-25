#include <stdio.h>
#include <math.h>
#define SUCESSO 0

int main (){

  int A, B, C;

  printf("Digite um valor para A: ");
  scanf("%d", &A);

  printf("Digite um valor para B: ");
  scanf("%d", &B);

  printf("Digite um valor para C: ");
  scanf("%d", &C);


    if (C % A == 0 && C % B == 0) {
        printf("Divisivel por ambos\n");
    } else if (C % A == 0 || C % B == 0) {
        printf("Divisivel por um\n");
    } else {
        printf("Nao eh divisivel\n");
    }
    return SUCESSO; 
}