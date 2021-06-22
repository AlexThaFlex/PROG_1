/*Escreva um programa que determina as solu¸c˜oes de uma equa¸c˜ao de segundo grau. Tenha em aten¸c˜ao que existem
equa¸c˜oes que n˜ao tˆem solu¸c˜ao (real)- ta mal*/
#include <math.h>
#include <stdio.h>
int main() {
    float a, b, c;
    float d, root1, root2;
    
    printf("Insira os coeficientes da equacão (axˆ2+bx+c=0): \n");
    scanf("%f %f %f", &a, &b, &c);
    char eq[100] = "x^(a + bx + c";
    d = b * b - 4 * (a * c);
   
    if(d > 0) {
    root1 = ( -b + sqrt(d)) / (2*a);
    root2 = ( -b - sqrt(d)) / (2*a);
    printf("As duas raízes da equação %s são: %.3f , %.3f,", eq, root1, root2);
    }
    else if(d == 0) {
    root1 = ( -b + sqrt(d)) / (2*a);
    printf("A raíz da equação %s é: %.3f ", eq, root1);
    }
    else 
    printf("A equação %s não tem soluções reais", eq);
    return 0;
}
  