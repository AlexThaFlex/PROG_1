#include <stdio.h>
#include <math.h>

float distancia(x1, y1, x2, y2){
 float dis;
 dis = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
 return dis;
}

void colisão(dis, sum){
    if ( dis < sum)
    printf("As duas bolas estão em colisão.\n");
    else printf("As duas bolas não estão em colisão.\n");
}
int main(){
float x1, y1, x2, y2, r1, r2, dis;

printf("Posicao (x, y) e raio da bola 1? ");
scanf("%f %f %f", &x1, &y1, &r1);
printf("Posicao (x, y) e raio da bola 2? ");
scanf("%f %f %f", &x2, &y2, &r2);

dis = distancia(x1, y1,x2, y2);
colisão(dis, r1+r2);

return 0;
}