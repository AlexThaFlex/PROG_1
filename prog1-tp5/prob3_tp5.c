#include <stdio.h>
#include <math.h>
float distancia(x1, x2, y1, y2){
return sqrt(((x1-x2)*(x1-x2)) + ((y1-y2)*(y1-y2)));
}


int main(){
    float x1, x2, y1, y2, dis;

    printf("Quais as coordenadas do ponto 1? ");
    scanf("%f %f", &x1, &y1);
    printf("Quais as coordenadas do ponto 2? ");
    scanf("%f %f", &x2, &y2);
    
    dis = distancia(x1, x2, y1, y2);
    printf("A distancia entre os dois pontos é: %.2f\n", dis);
    return 0;

}