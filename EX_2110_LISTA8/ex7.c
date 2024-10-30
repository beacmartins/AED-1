#include <stdio.h>
#define SUCESSO 0

int main() {
    
    float alunos[5][4];
    int i;
    float somaNotas = 0;
    int matriculaMaiorNota = 0;
    float maiorNotaFinal = 0;

    
    for (i = 0; i < 5; i++) {
        printf("Informe a matricula do aluno %d: ", i + 1);
        scanf("%f", &alunos[i][0]); 
        printf("Informe a media das provas do aluno %d: ", i + 1);
        scanf("%f", &alunos[i][1]); 
        printf("Informe a media dos trabalhos do aluno %d: ", i + 1);
        scanf("%f", &alunos[i][2]); 

       
        alunos[i][3] = alunos[i][1] + alunos[i][2]; 
       
        somaNotas += alunos[i][3];

       
        if (alunos[i][3] > maiorNotaFinal) {
            maiorNotaFinal = alunos[i][3];
            matriculaMaiorNota = alunos[i][0];
        }
    }

   
    float mediaNotas = somaNotas / 5;

   
    printf("\nMatricula do aluno com a maior nota final: %.0f\n", matriculaMaiorNota);
    printf("Media aritmetica das notas finais: %.2f\n", mediaNotas);

    return SUCESSO;
}
