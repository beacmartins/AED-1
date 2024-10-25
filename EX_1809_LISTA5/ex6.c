#include <stdio.h>
#include <math.h>
#define SUCESSO 0

void prod (int n){
    int produtorio=1;
    for(int i=1; i <= n; i++){
      produtorio = produtorio * i;
    }
    printf("Produtorio: de 1 ate %d eh %d\n", n, produtorio);
}

void tabuada (){
  for (int i = 0; i <= 7; i++) {
    if(i == 3){
        printf("Tabuada do 3:\n");
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); 
    }

    if(i == 5){
        printf("Tabuada do 5:\n");
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); 
    }

    if(i == 7){
        printf("Tabuada do 7:\n");
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); 
    }
  }
}

void serie (){
  int S;
  S= 1 + 1 + 2 + 3 + 5 + 8 + 13 + 21;
  printf("S: %d", S);
}

void primos (){
  int num = 1001, div, c = 0;
  
  while(c < 5) {
    div = 0;
    for(int i = 2; i <= num/2; i++) {
      if(num % i == 0) div++;
    }

    if(div == 0){
      c++;
      if(c != 5) num++;
    }else if(c != 5) num++;
  }
  printf("%d", num);
}

int main (){
    int cod;
    int N;

    printf("Digite o cod (1, 2, 3 ou 4): ");
    scanf("%d", &cod);


    switch (cod) {
    case 1:
      printf("Digite n: ");
      scanf("%d", &N);

      prod (N);
    break;
    case 2:
      tabuada();
    break;
    case 3:
      serie();
    break;
    case 4:
        primos();
    break;
    }
    

    return SUCESSO;
}