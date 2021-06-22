/*Escreva um programa que leia um ponto (coordenadas x, y) e indique em que quadrante se encontra*/
#include <stdio.h>
  int main() {
      float x, y;
      
      printf("Qual é o valor de x? \n");
      scanf("%f", &x);
      printf("Qual é o valor de y? \n");
      scanf("%f", &y);

      if(x > 0 && y > 0)
      printf("O ponto encontra-se no 1o quadrante.\n");
      else if(x < 0 && y > 0)
      printf("O ponto encontra-se no 2o quadrante.\n");
      else if(x < 0 && y < 0)
      printf("O ponto encontra-se no 3o quadrante.\n");
      else
      printf("O ponto encontra-se no 4o quadrante.\n");

      return 0;

  }