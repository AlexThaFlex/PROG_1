#include <stdio.h>

int main(){
    int num, i= 0, lin;
    char ast= '*';
     char space = '-';
    
    printf("Qual a altura da árvore?\n");
    scanf("%d", &num);
    
    for(int i = 0; i < num - 1; i++)
    {
        for(int j = 0; j < num - 2 - i; j++)
            printf("%c", space);
        
        for (int j = 0; j < 1 + 2 * i; j++)
            printf("%c", ast);

        printf("\n");
    }
    for (int j = 0; j < num - 2; j++)
        printf("%c", space);
        
    printf("*\n");
}



 