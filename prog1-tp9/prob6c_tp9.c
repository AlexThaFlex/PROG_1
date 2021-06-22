#include <stdio.h>
#include <ctype.h>
#include <string.h>

char converte(char c, int shift)
{
    int r = (c + shift - 'a') % 26;
    return (r < 0 ? 'z' + r + 1 : r + 'a');
}

void desloca(char *texto, char* cifra, int shift)
{
    for(int i = 0; i < strlen(texto); i++)
        cifra[i] = isalpha(texto[i]) ? converte(texto[i], shift) : texto[i];
}

void ataque(char *cifra)
{
    char at[strlen(cifra)];
    for(int i = 1; i < 26; i++)
    {
        desloca(cifra, at, i);
        printf("com shift +%d: %s\n", i, at);
    }
}

int main()
{
    char texto[100];
    printf("Frase: "); fgets(texto, 100, stdin);
    ataque(texto);
}