#include <stdio.h>
int main() {
    int fam = 0, total = 0, less = 0;

    for(int i = 1; i <= 53; i++){
        printf("Introduza o número de famílias com crianças menores de 6 anos na freguesia nr. %d\n", i);
        scanf("%d", &fam);
        total += fam;
        if (fam < 35) less++;
    }
    printf("\nTotal de famílias com crianças de idade inferior a 6 anos: %d \n", total);
    printf("\nFreguesias com menos de 35 famílias com crianças de idade inferior a 6 anos: %.2f%%\n", (float) less*100/53);

    return 0;
}