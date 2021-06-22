#include <stdio.h>
#include "complexos.h"

int main()
{
    complexo c1 = leComplexo();
    printf("Modulo 1: %.2f\n", modComplexo(c1));
    printf("Argumento 1: %.2f\n", argComplexo(c1));
    complexo c2 = leComplexo();
    complexo c3 = somaComplexo(c1, c2);
    printf("Soma: ");
    escreveComplexo(c3);
}
