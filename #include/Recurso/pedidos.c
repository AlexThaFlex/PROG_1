#include <stdio.h>

int main()
{
    float lucro = 0;
    int coffee=0, milk=0, cont;
    char letter;

    printf("Introduza o pedido: \n");
    printf("(F para terminar)");
    while(scanf(" %c", &letter) == 1)
    {
        scanf("%d", &cont);
        switch(letter)
        {
            case 'C':
            coffee += cont;
            lucro += cont * 0.65;
            break;

            case 'L':
            milk += cont;
            lucro += cont * 0.5;
            break;

        }
        if(letter == 'F') break;
        printf("Introduza o pedido: \n");  
    }
    printf("Lucro total foi de %.2f euros.\n", lucro);
    printf("Foram pedidos %d cafes e %d leites.\n", coffee, milk);
    printf("A bebida preferida dos clientes é %s", coffee > milk ? "cafe" : "milk");

    return 0;
}