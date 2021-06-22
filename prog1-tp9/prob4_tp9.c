#include <stdio.h>

int mdc(int x, int y);

int main()
{
    int x, y;
    printf("Introduza um número x: ");
    scanf("%d", &x);
    printf("Introduza um número y: ");
    scanf("%d", &y);

    printf("mdc(%d,%d) = %d\n", x, y, mdc(x, y));
    return 0;
}

int mdc(int x, int y)
{
    if(y == 0) return x;
    return mdc(y, x % y);
}
