/*capicua*/
#include <stdio.h>
  int main() {
  int num, d1, d3;

  printf("Insira um número de 3 dígitos: \n");
  scanf("%d", &num);

  d1 = num / 100;
  d3 = num % 10;

  if(d1 == d3) 
  printf("O número %d é capicua.\n", num);
  else
  printf("O número %d não é capicua. \n", num);

  return 0; 
  }