#include <stdio.h>

int hoursmin(int totalmins, int *hours, int *minutes)
{
    *hours = totalmins/60;
    *minutes = totalmins%60;

    if((float)totalmins/60/24 > 1)
        return 1;
    else 
        return 0;
}

int main(){
    int hours, minutes, totalmins;
    printf("Insira o total de minutos: ");
    scanf("%d", &totalmins);

    if(hoursmin(totalmins, &hours, &minutes))
        printf("%d minutos correspondem a %d horas e %d minutos é superior a 1 dia.\n", totalmins, hours, minutes);
    else
        printf("%d minutos correspondem a %d horas e %d minutos não é superior a 1 dia.\n", totalmins, hours, minutes);

return 0;
}