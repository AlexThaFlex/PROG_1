#include <stdio.h>

int main()
{
    char op, c;
    int q, w, x;

    printf("escolha um dos seguintes operadores: +,-,*,/,r  ");
    printf("operação: "); scanf("%c", &op);

    if (op == '-')
    {
        printf("operador (u)nario ou (b)inário: \n");
        scanf(" %c", &c);
    
        if (c == 'u')
        {
            printf("1º valor: "); scanf("%d", &q);
            x = -q;
            printf("resultado: %d\n", x);
        }
        else if (c == 'b')
        {
            printf("1º valor: "); scanf("%d", &q);
            printf("2º valor: "); scanf("%d", &w);
            x = q - w;
            printf("resultado: %d\n", x);
        }
    }
    else if (op == '+')
    {
        printf("1º valor: "); scanf("%d", &q);
        printf("2º valor: "); scanf("%d", &w);
        x = q + w;
        printf("resultado: %d\n", x);
    }
    else if (op == '*')
    {
        printf("1º valor: "); scanf("%d", &q);
        printf("2º valor: "); scanf("%d", &w);
        x = q * w;
        printf("resultado: %d\n", x);
    }
    else if (op == '/')
    {
        printf("1º valor: "); scanf("%d", &q);
        printf("2º valor: "); scanf("%d", &w);
        x = q / w;
        printf("resultado: %d\n", x);
    }
    else if (op == 'r')
    {
        printf("1º valor: "); scanf("%d", &q);
        printf("2º valor: "); scanf("%d", &w);
        x = q % w;
        printf("resultado: %d\n", x);
    }
return 0;
}