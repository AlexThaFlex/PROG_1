/*Escreva um programa que leia 3 n´umeros e os escreva por ordem ascendente*/
#include <stdio.h>
  int main () {
      int num1, num2, num3;
      printf("Insira 3 números\n");
      scanf("%d %d %d", &num1, &num2, &num3);

      if(num1 < num2 && num2 < num3)
      printf("Por ordem ascendente os números são: %d %d %d", num1, num2, num3);
      else if(num1 > num2 && num1 < num3)
      printf("Por ordem ascendente os números são: %d %d %d", num2, num1, num3);
      else if(num1 > num2 && num2 > num3)
      printf("Por ordem ascendente os números são: %d %d %d", num3, num2, num1);
      else if(num1 < num3 && num3 < num2)
      printf("Por ordem ascendente os números são: %d %d %d", num1, num3, num2);
      else if(num1 < num2 && num1 > num3)
      printf("Por ordem ascendente os números são: %d %d %d", num3, num1, num2);
      else 
      printf("Por ordem ascendente os números são: %d %d %d\n", num2, num3, num1);

      return 0;
  
  }