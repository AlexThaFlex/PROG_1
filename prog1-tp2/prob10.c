#include <stdio.h>
    
   int main() {
        int a, b;
        
        /*b <- a - b
        a <- a - b
        b <- a + b*/

        printf("Introduza duas variáveis, a e b, respetivamente: \n");
        scanf("%d", &a);
        scanf("%d", &b);
        
        b = a - b;
        a = a - b;
        b = a + b;
        
        printf("Os valores de a e b, depois da troca são: %d, %d.\n", a, b);
        
       
        return 0;
   }