#include <stdio.h> //box

void quociresto(int dividendo, int divisor, int *quociente, int *resto)
{
    *quociente = 0;
    while (dividendo >= divisor)
    {
        (*quociente)++;
        dividendo -= divisor;
    }
    *resto = dividendo;
}

int soma(int n) //dos dig de um nr inteiro;
{
    int sum = 0;
    while(n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int par(int n)
{
    return n % 2 == 0;
}

int main()
{
    int a, b, q, r;
    printf("a/b (a, b) "); scanf("%d %d", &a, &b);
    quociresto(a, b, &q, &r);
    printf("%d/%d = %d resto %d\n\n", a, b, q, r);

    printf("Soma dos algarismos "); scanf("%d", &a);
    printf("%d\n\n", soma(a));

    printf("Par? "); scanf("%d", &a);
    printf("%s\n", par(a) ? "Par" : "Impar");
}