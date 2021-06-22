#include <stdio.h>
void troca(int num){
     while (num != 0)
    {
        printf("%d", num % 10);
        num /= 10;
    }

}
int main() {
    int num;
    printf("Qual é o número?\n");
    scanf("%d", &num);

    troca(num);
    printf("\n");
}