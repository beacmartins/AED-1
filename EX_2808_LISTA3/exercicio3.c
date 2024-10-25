#include <stdio.h>
#include <math.h>
#define SUCESSO 0

int main (){

  int codigo; 
  
    printf("LISTA DE MESES\n");
    printf("\t1 - JANEIRO\n\t2- FEVEREIRO\n\t3 - MARCO\n\t4 - ABRIL\n\t5 - MAIO\n\t6 - JUNHO\n\t7 - JULHO\n\t8 - AGOSTO\n\t9 - SETEMBRO\n\t10 - OUTUBRO\n\t11 - NOVEMBRO\n\t12 - DEZEMBRO\n");

    printf("Digite o codigo relacionado ao mes escolhido: \n");
    scanf("%d", &codigo);

    switch (codigo){
    case 1: {
      printf("JANEIRO");
      break;
    }
    case 2: {
      printf("FEVEREIRO");
      break;
    }
    case 3: {
      printf("MARCO");
      break;
    }
    case 4: {
      printf("ABRIL");
      break;
    }
    case 5: {
      printf("MAIO");
      break;
    }
    case 6: {
      printf("JUNHO");
      break;
    }
    case 7: {
      printf("JULHO");
      break;
    }
    case 8: {
      printf("AGOSTO");
      break;
    }
    case 9: {
      printf("SETEMBRO");
      break;
    }
    case 10: {
      printf("OUTUBRO");
      break;
    }
    case 11: {
      printf("NOVEMBRO");
      break;
    }
    case 12: {
      printf("DEZEMBRO");
      break;
    }
    default:
     printf("Mes invalido. Digite um codigo de 1 a 12");
    }

  return SUCESSO;
}