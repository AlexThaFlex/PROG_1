#include <stdio.h>
#include <string.h>

int conta(char *frase, char *palavra);

int main()
{
    char frase[500];
    char palavra[100];
    printf("Frase? "); 
    fgets(frase, 500, stdin);
    
    for(int i=0; i<500; i++)
    {
        if(frase[i] == '.')
        {
            frase[i++]= '\0'; //++i
            break;
        }
    }
    printf("Palavra? ");
    fgets(palavra, 100, stdin);
    palavra[strlen(palavra) - 1] = '\0';

    printf("Resultado: A palavra %s apareceu %d vez na frase.\n", palavra, conta(frase, palavra));


return 0;
}

int conta(char *frase, char *palavra){
    int cont=0;
    char *n= frase -1;
    while((n = strstr(n + 1, palavra)) != NULL)
        cont++;
    return cont;
}