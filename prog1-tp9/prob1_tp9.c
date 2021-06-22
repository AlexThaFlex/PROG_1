#include <stdio.h>
#include <string.h>
#define dim 100

void inverte(char *strOriginal, char *strInvertida);

int main()
{
    char strori[dim], strinv[dim];

    printf("Escreva uma frase: ");
    fgets(strori, 100, stdin);
    inverte(strori, strinv);
    printf("A frase invertida é \"%s\"\n", strinv);

return 0;
}

void inverte(char *strOriginal, char *strInvertida)
{
    int len;
    len = strlen(strOriginal) -1;
    for(int i=0; i < len; i++)
    {
        strInvertida[i]=strOriginal[len-i-1];
    }
}