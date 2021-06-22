#include <stdio.h>

#define M_PA 101325
#define M_BAR 1.01325
#define M_PSI 14.6959487755
#define M_H 760

float converte(float valor, char origem)
{
    switch (origem)
    {
        case 'P':
            return valor / M_PA;
        case 'b':
            return valor / M_BAR;
        case 'p':
            return valor / M_PSI;
        case 'H':
            return valor / M_H;
        default:
            return -1;
    }
}

int main()
{
    float val;
    char uni;
    float res, tot = 0;

    while(scanf("%f %c", &val, &uni) == 2)
    {
        res = converte(val, uni);

        if(res == -1)
        {
            printf("Unidade de medida desconhecida\n");
            continue;
        }

        printf("%.4f\n", res);
        tot += res;
    }
    printf("valor total (atm): %.4f atm\n", tot);
}