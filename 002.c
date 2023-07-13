
#include <stdio.h>
#include <math.h>

int main() {
    float u1, u2, u3, stvarna, RJu, RJe, RRe, RNa;
    int Jula, Jela, Reza, Naca;
    scanf("%f %f %f", &u1, &u2, &u3);
    stvarna = u1 + u2 + u3; 
    Jula = floor(u1) + floor(u2) + floor(u3); 
    Jela = ceil(u1) + ceil(u2) + ceil(u3); 
    Reza = trunc(u1) + trunc(u2) + trunc(u3); 
    Naca = round(u1)+round(u2)+round(u3);
    printf("stvarna: %.2f\n", stvarna);
    printf("Jula %d\n", Jula);
    printf("Jela %d\n", Jela);
    printf("Reza %d\n", Reza);
    printf("Naca %d\n", Naca);
    RJu=fabs(stvarna-Jula);
    RJe=fabs(stvarna-Jela);
    RRe=fabs(stvarna-Reza);
    RNa=fabs(stvarna-Naca);
    printf("Pogreska:\n");
    printf("Jula: %.2f\n", RJu);
    printf("Jela: %.2f\n", RJe);
    printf("Reza: %.2f\n", RRe);
    printf("Naca: %.2f\n", RNa);
     return 0;
 }
