#include <stdio.h>
#define SUCESSO 0

int main (){

    for (int i = 1; i <= 10; i++){
        printf("\tTABUADA DO %d\n", i);
        for (int j = 1; j <= 10; j++){
            int opr;
            opr = (i * j);
        printf("%d x %d = %d\n", i, j, opr);
        }
    } 


    return SUCESSO;
}