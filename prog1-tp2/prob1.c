/*determina o perímetro e área */

#include <stdio.h>

int main() {
    float raio, perimetro, area;
    float pi = 3.1416 ;

    printf("Qual é o raio da circunferência?\n");
    scanf("%f", &raio);

    perimetro = 2 * pi * raio;
    area = pi * raio * raio;

    printf("O perímetro da circunferência é: %f e a área da circunferência é: %f\n", perimetro, area);

    return 0;
}