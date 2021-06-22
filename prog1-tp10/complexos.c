#include <stdio.h>
#include <math.h>
#include "complexos.h"

complexo leComplexo()
{
    complexo c;
    printf("a + bi (a b): ");
    scanf("%f %f", &c.x, &c.y);
    return c;
}

void escreveComplexo(complexo c)
{
    printf("z = %.2f + i%.2f\n", c.x, c.y);
}

complexo somaComplexo(complexo c1, complexo c2)
{
    complexo r;
    r.x = c1.x +c2.x;
    r.y = c1.y +c2.y;
    return r;
}

double modComplexo(complexo c)
{
    return sqrt(c.x * c.x + c.y * c.y);
}

double argComplexo(complexo c)
{
    return atan2(c.y, c.x);
}