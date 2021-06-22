#include <math.h>
#include <stdio.h>
int main() {
    float a, b, c;
    float d, root1, root2;
    
    printf("Insira os coeficientes da equacão (axˆ2+bx+c=0): \n");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * (a * c);
   
    root1 = ( -b + sqrt(d)) / (2*a);
    root2 = ( -b - sqrt(d)) / (2*a);
    printf("As raízes da equação são: %.3f , %.3f,", root1, root2);

    return 0;
}