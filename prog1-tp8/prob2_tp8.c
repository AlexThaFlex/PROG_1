#include <stdio.h>
#define DIM 100

int compacta(char orig[], int N, char dst[]);
int main()
{
    char orig[DIM], dst[DIM];
    int N = -1, compN;
    do
    {   N++;   
        scanf("%c", &orig[N]);
    } while(orig[N] != '.' && N < DIM); // imp

    compN = compacta(orig, N, dst);
    printf("Compactado (%d->%d): ", N, compN);
    for(int i = 0; i < compN; i++) printf("%c", dst[i]);
    printf("\n");
}

int compacta(char orig[], int N, char dst[])
{
    int compN = 0;
    dst[0] = orig[0];
    for(int i = 1; i < N; i++)
    {
        if(orig[i] != dst[compN]) dst[++compN] = orig[i];
    }
    return compN + 1;
}
