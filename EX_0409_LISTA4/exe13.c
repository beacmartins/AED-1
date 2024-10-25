#include <stdio.h>
#define SUCESSO 0

int main (){

    int idade, filhos;
    int totalHabitantes = 0;
    int totalFilhos = 0;
    int totalIdade = 0;
    int maiorIdade = 0;
    int acimaDe20 = 0;

    
    while (1) {
        printf("Digite a idade (idade negativa para encerrar): ");
        scanf("%d", &idade);
        
        if (idade < 0) {
            break; // Encerra o loop quando uma idade negativa é digitada
        }
        
        printf("Digite o número de filhos: ");
        scanf("%d", &filhos);
        
        totalIdade = totalIdade + idade;
        totalFilhos = totalFilhos + filhos;
        totalHabitantes = totalHabitantes + 1;
        
        if (idade > maiorIdade) {
            maiorIdade = idade;
        }
        
        if (idade > 20) {
            acimaDe20 = acimaDe20 + 1;
        }
    }
    
    double mediaIdade = 0.0;
    double mediaFilhos = 0.0;
    double percentualAcimaDe20 = 0.0;

    if (totalHabitantes > 0) {
        mediaIdade = (double)totalIdade / totalHabitantes;
        mediaFilhos = (double)totalFilhos / totalHabitantes;
        percentualAcimaDe20 = ((double)acimaDe20 / totalHabitantes) * 100;
    }


    printf("Média da idade da população: %.2f\n", mediaIdade);
    printf("Média do número de filhos: %.2f\n", mediaFilhos);
    printf("Maior idade: %d\n", maiorIdade);
    printf("Percentual de pessoas acima de 20 anos: %.2f%%\n", percentualAcimaDe20);

    return SUCESSO; 
}