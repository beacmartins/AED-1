#include <stdio.h>
#include <math.h>
#define SUCESSO 0

int main() {
    double S = 0.0; 
    int n;            
    
   
    for (n = 0; n <= 14; n++) {  
        double numerator = pow(2, n);          
        double denominator = pow(25 - n, 2);   
        
        S += numerator / denominator;  
    }
    
   
    printf("O resultado do somatorio eh: %lf\n", S);
    
    return SUCESSO;
}