#include <stdio.h>

int main()
{
    float v1, v2, res;
    char uni;

    while (scanf("%f %f %c", &v1, &v2, &uni) == 3)
    {
        switch(uni)
        {
            case 'V':
                res = v1 * v2;
                printf("%.2f V\n", res);
                break;
            case 'R':
                res = v2 / v1;
                printf("%.2f Ohm\n", res);
                break;
            case 'I':
                res = v1 / v2;
                printf("%.2f A\n", res);
                break;
        }
    }
}