#include <stdio.h>

int main() {
    int x, y, res;

    printf("Introduza dois números: \n");
    scanf("%d", &x);
    scanf("%d", &y);
    

    res = x + y;
    printf("A soma dos dois números é: %d\n", res);

    return 0;
}