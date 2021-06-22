#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int M = 0, N = 0, num;
    float x, y, rd;
    srand(time(NULL));
    printf("Valor de N: ");
    scanf("%d", &num);
    
    while(num > 0){
        x = rand() % 101;
        x /= 100;
        y = rand() % 101;
        y /= 100;
        if((x*x + y*y) < 1) M++;
        N++;
        num--;
    }
    printf("pi: %f\n", (float) 4*M/N);

}