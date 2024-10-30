#include <stdio.h>
#include <string.h>
#define SUCESSO 0

int main (){
    int key;
    char string[50];

    printf("Digite um valor inteiro para a chave: ");
    scanf("%d", &key);

    printf("Digite uma string: ");
    scanf("%s", string);

    for(int i = 0; i < strlen(string); i++){
        (string[i] += key) % 255;
    }

    printf("String criptografada: %s", string);

    return SUCESSO;
}