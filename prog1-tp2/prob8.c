/*arr = aproximação, frac = apenas parte à direita da vírgula */

#include <stdio.h>
int main() {
    float num, frac, arr;
    int parmenos, parmais;
    
    printf("Escreva um número: \n");
    scanf("%f", &num);
    frac = num - (int) num;

    if(frac >= 0.5 && ( (int) num + 1) % 2 == 0 )
     { parmenos = (num + 1) - 2;
      parmais =  (num +1) + 2;
      printf("Os dois números pares mais próximos sâo: %d e %d.\n", parmenos, parmais); 
     }
    else if(frac >= 0.5 && ((int) num + 1) % 2 != 0 )
    {
      parmenos = (num + 1) - 1;
      parmais =  (num +1) + 1;
      printf("Os dois números pares mais próximos sâo: %d e %d.\n", parmenos, parmais);
    }
    else if(frac < 0.5 && (int) num % 2 == 0) {
    
      parmenos = num - 2;
      parmais =  num + 2;
      printf("Os dois números pares mais próximos sâo: %d e %d.\n", parmenos, parmais); 
    }
    else if(frac < 0.5 && (int) num % 2 != 0)
    {
      parmenos = num - 1;
      parmais =  num + 1;
      printf("Os dois números pares mais próximos da aproximação sâo: %d e %d.\n", parmenos, parmais);
    }

    return 0;
}