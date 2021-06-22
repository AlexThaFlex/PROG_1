#include <stdio.h>

int main() {
    float r1, r2, rs, rp;
    printf("Qual o valor da resistência 1? \n");
    scanf("%f", &r1);

    printf("Qaul o valor da resistência 2?\n");
    scanf("%f", &r2);
    
    rs = r1 + r2;
    rp= 1 / (1 / r1 + 1 / r2);

    printf("Valor da resistencia equivalente em serie: %f\n", rs);
    printf("Valor da resistencia equivalente em paralelo: %.4f\n" , rp);
    return 0;
}