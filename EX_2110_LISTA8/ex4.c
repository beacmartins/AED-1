#include <stdio.h>
#include <string.h>
#define SUCESSO 0

int main (){
    char coisa[50];


    printf("Digite uma string com letras minusculas: ");
    scanf("%s", coisa);

    for(int i = 0; i < strlen(coisa); i++){
        if(coisa[i] >= 97 && coisa[i] <= 122){
            coisa[i] = coisa[i] - 32;
        }
    }

    printf("String em maiusculas: %s", coisa);

    return SUCESSO;
}