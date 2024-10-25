#include <stdio.h>
#include <math.h>
#define SUCESSO 0

float mediaNotas (int n1, int n2, int n3){
   float mediaArit;

   mediaArit = (n1 + n2 + n3)/ 3;
   
   return mediaArit;
}


int main (){
    int qntAlunos;
    int nota1, nota2, nota3;

    printf("Quantos alunos?: ");
    scanf("%d", &qntAlunos);

    for(int i=1; i <= qntAlunos; i++){
        do {
        printf("Digite suas 3 notas: \n");
        scanf("%d %d %d", &nota1, &nota2, &nota3);

        if (nota1 == 0 && nota2 == 0 && nota3 == 0){
        printf("Nao eh possivel calcular media.\n");
    } else {
        printf("A media das notas eh: %.2f\n", mediaNotas(nota1, nota2, nota3));
        } 
        } while (nota1 != 0 && nota2 != 0 && nota3 != 0);
    }

   return SUCESSO;
}