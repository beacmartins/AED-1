#include <stdio.h>
#define SUCESSO 0

void func(int *px, int *py) {
    px = py;                  
    *py = (*py) * (*px);     
    *px = *px + 2;         
}

int main() {
    int x, y;
    printf("digite valor de x: ");
    scanf("%d", &x);    
    printf("Digite valor de y: ");   
    scanf("%d", &y);      
    func(&x, &y);          
    printf("x = %d, y = %d", x, y); 

    return SUCESSO;
}
