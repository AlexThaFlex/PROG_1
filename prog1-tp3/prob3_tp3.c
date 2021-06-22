#include <stdio.h>
  int main() {
      int num;
      char int1[12] = "]-∞, -10["; char int2[8] = "[5, 45["; char int3[11] = "]120, 245]";
      
      printf("Indique um número: \n");
      scanf("%d", &num);
      
      if(num < -10 || (num >= 5 && num < 45) || (num > 120 && num <= 245))
      {
          if(num < -10)  
           printf("O número encontra-se no intervalo: %s\n", int1);
          else if(num >=5 && num < 45)  
           printf("O número encontra-se no intervalo: %s\n", int2);
          else if(num <= 245 && num > 120)  
           printf("O número encontra-se no intervalo: %s\n", int3);
      }
      else printf("O número não se encontra nos intervalos.\n");

 return 0;      
      
      
  }
