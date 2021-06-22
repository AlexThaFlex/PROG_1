#include <stdio.h>
int main() {
    int num, sum = 0;
    
    printf("Insira um número.\n");
    scanf("%d", &num);

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
   
    printf("A soma dos dígitos do número é: %d\n", sum);
}