#include <stdio.h>
#include <string.h>
#define dim 1000
char converte(char c, int shift);
void desloca(char *texto, char* cifra, int shift);

int main() 
{
    char texto[100], cifra[100];
    int shift;
    printf("Frase: "); fgets(texto, 100, stdin);
    printf("Shift: "); scanf("%d", &shift);
    desloca(texto, cifra, shift);
    printf("Encriptada: %s", cifra);
}
}
char converte(char c, int shift)
{
    int r = (c + shift - 'a') % 26;
    return (r < 0? 'z' +r + 1 : r + 'a');
}

void desloca(char *texto, char* cifra, int shift)
{
    for(int i = 0; i < strlen(texto); i++)
        cifra[i] = isalpha(texto[i]) ? converte(texto[i], shift) : texto[i];
}