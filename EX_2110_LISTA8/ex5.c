#include <stdio.h>
#include <string.h>
#define SUCESSO 0

int main (){
    char nome[100], nome_meio[100], last_nome[100];
    char um, dois, tres;

    printf("Digite seu nome completo em minusculas: ");
    scanf("%s %s %s", nome, nome_meio, last_nome);

    if (nome[0] && nome_meio[0] && last_nome[0]){
      um = nome[0] = nome[0] - 32;
      dois = nome_meio[0] = nome_meio[0] - 32;
      tres = last_nome[0] = last_nome[0] - 32;

      printf("%c%c%c", um, dois, tres);
    }

    return SUCESSO;
}