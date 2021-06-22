/*Implemente um programa que identifique se um n´umero ´e par ou ´ımpar.*/
#include <stdio.h>
  int main() {
      int num;
      printf("Insira um número: \n");
      scanf("%d", &num);

      if(num % 2 == 0 || num == 0)
      printf("O número %d é par.\n", num);
      else
      printf("O número %d é ímpar. \n", num);

      return 0;
  }