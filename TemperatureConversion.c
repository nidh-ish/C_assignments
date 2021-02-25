#include<stdio.h>

int main() {
    
    double Tc, Tf;
    
    scanf("%lf", &Tc);
    
    Tf = 1.8 * Tc + 32;
    
    printf("%.2lf", Tf);
    
    return 0;
}
