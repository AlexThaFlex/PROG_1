#include <stdio.h>

int main()
{
   int n;
   printf("%ld", sizeof(n));
   printf("Insira o numero de numeros primos que pretende: "); scanf("%d", &n);

   int num = 2, cont;
   while(n > 0)
   {
        cont = 0;
        for(int j = 2; j < num; j++)
        {
            if(num % j == 0) cont++;
        }
        if(cont == 0)
        {
            printf("%d\n", num);
            n--;
        } 
        num++;
   }
}