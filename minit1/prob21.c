#include <stdio.h>

#define M_PA 101325
#define M_BAR 1.01325
#define M_PSI 14.6959487755
#define M_H 760

int main()
{
    float val;
    char uni;
    float res, tot = 0;
    
    printf("Qual é o valor e a grandeza?\n");
    while(scanf("%f %c", &val, &uni) == 2)
    {
        switch(uni)
        {
            case 'P':
                res = val / M_PA;
                break;
            case 'b':
                res = val / M_BAR;
                break;
            case 'p':
                res = val / M_PSI;
                break;
            case 'H':
                res = val / M_H;
                break;
            default:
                printf("Unidade de medida desconhecida\n");
                continue;
        }
        printf("%.4f\n", res);
        tot += res;
    }
    printf("valor total (atm): %.4f atm\n", tot);
}