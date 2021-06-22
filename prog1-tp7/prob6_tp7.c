#include <stdio.h>
   
    int main()
    {
    int var1 = 5;
    char var2 = 'a';

    int *ptr1 = &var1;
    char *ptr2 = &var2;
    *ptr2 = 'b';
    printf("var1 tem o endereco %p e o valor %d\n", ptr1, *ptr1);
    printf("var2 tem o endereco %p e o valor %d\n", ptr2, *ptr2);
    printf("Valor de ptr1+1: %p\n", ptr1+1);
    printf("Valor de ptr2+1: %p\n", ptr2+1);
    printf("Tamanho de char: %lu\n", sizeof(var2));
    printf("Tamanho de char*: %lu\n", sizeof(&var2));
    printf("Tamanho de int: %lu\n", sizeof(var1));
    printf("Tamanho de int*: %lu\n", sizeof(&var1));
    }
