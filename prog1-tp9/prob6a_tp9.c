#include <stdio.h>
#include <string.h>
#define dim 1000
char converte(char c, int shift);

int main() 
{
    char c;
    int shift;
    printf("caracter e shift? ");
    scanf(" %c %d", &c, &shift);

    printf("resultado: %c\n", converte(c, shift));
}
char converte(char c, int shift)
{
    int r = (c + shift - 'a') % 26;
    return (r < 0? 'z' +r + 1 : r + 'a');
}

