#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SUCESSO 0

int eh_palindromo(char *str) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        while (inicio < fim && !isalnum(str[inicio])) {
            inicio++;
        }
        while (inicio < fim && !isalnum(str[fim])) {
            fim--;
        }

        if (tolower(str[inicio]) != tolower(str[fim])) {
            return 0;
        }
        inicio++;
        fim--;
    }
    return 1; 
}

int main() {
    char stringue[100];

    printf("Digite uma sequencia de caracteres: ");
    fgets(stringue, sizeof(stringue), stdin);

    // Remove o newline do final da string, se presente
    stringue[strcspn(stringue, "\n")] = '\0';

    printf("Voce digitou: %s\n", stringue);

    if (eh_palindromo(stringue)) {
        printf("A sequencia eh um palindromo.\n");
    } else {
        printf("A sequencia não eh um palindromo.\n");
    }

    return SUCESSO;
}
