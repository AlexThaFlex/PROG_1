/*Escreva um programa que leia o valor total de segundos e mostre o equivalente em dias, horas, minutos e segundos.*/

#include <stdio.h>
int main() {
    int sec, day, hour, min, sec2;
    
    printf("Quantos segundos?\n");
    scanf("%d", &sec);
    
  /*  1 day == 86400 sec;
    1 hour == 3600 sec;
    1 min == 60 sec; */

    day = sec / 86400;
    hour = (sec % 86400) / 3600;
    min = (sec % 3600) / 60;
    sec2 = (sec % 60);
    printf("%d segundos correspondem a %d dias, %d horas, %d minutos e %d segundos\n", sec, day, hour, min, sec2);

    return 0;
}