#include <stdio.h>
#include <string.h>


int main()
{
    char str[100];
    printf("Frase? "); fgets(str, 100, stdin);
    int cont = 0, sum = 0, mS = 0, mLen = 0, lS = 0, lLen = 0;
    int len = strlen(str);
    str[len - 1] = ' ';
    float avg;

    for(int i = 0; i < len; i++)
    {
        if(str[i] == ' ')
        {
            if(lLen > mLen)
            {
                mLen = lLen;
                mS = lS;
            }
            sum += lLen;
            lS = i + 1;
            lLen = 0;
            cont++;
        }
        else
        {
            lLen++;
        }
    }

    avg = (float) sum / cont;

    printf("Numero de palavras: %d\n", cont);
    char temp = str[mS + mLen];
    str[mS + mLen] = '\0';
    printf("Palavra maior: %s\n", (str + mS));
    str[mS + mLen] = temp;
    printf("Comprimento medio: %.2f\n", avg);
}