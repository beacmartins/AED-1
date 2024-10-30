#include <stdio.h>
#define SUCESSO 0
#define PI 3.14159


void calcCircunferencia(float R, float *compr, float *area) {
    *compr = 2 * PI * R;         
    *area = PI * R * R;          
}

int main() {

    float R;                     
    float comprimento;          
    float area;                  

    
    printf("Informe o raio da circunferencia: ");
    scanf("%f", &R);

    calcCircunferencia(R, &comprimento, &area);

    printf("Comprimento da circunferencia: %.2f\n", comprimento);
    printf("Área da circunferencia: %.2f\n", area);

    return SUCESSO;
}
