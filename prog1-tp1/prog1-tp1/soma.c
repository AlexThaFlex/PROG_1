#include <stdio.h>

int main() {
    int x, y, res;

    printf("Introduza um número: \n");
    scanf("%d", &x);
    printf("Introduza outro número: \n");
    scanf("%d", &y);

    res = x + y;
    printf("A soma dos dois números é: %d\n", res);

    return 0;
}