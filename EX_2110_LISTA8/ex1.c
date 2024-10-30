#include <stdio.h>
#include <string.h>
#define SUCESSO 0

int main() {
    char S[100], I[100];
    int length, i;

    printf("Digite uma palavra: ");
    fgets(S, sizeof(S), stdin);

    length = strlen(S);
    if (S[length - 1] == '\n') {
        S[length - 1] = '\0';
        length--;
    }

    for (i = 0; i < length; i++) {
        I[i] = S[length - 1 - i];
    }
    I[length] = '\0'; 

    printf("Palavra invertida: %s\n", I);

    return SUCESSO;
}
