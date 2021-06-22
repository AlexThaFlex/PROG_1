#include <stdio.h>

int main() {
    int month, year;
   
    printf("Introduza mês e o ano: \n");
    scanf("%d %d", &month, &year);
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    printf("O mês considerado tem 31 dias.\n");
    else if(month == 4 || month == 6 || month == 9 || month == 11)
    printf("O mês considerado tem 30 dias.\n");

    else if(month == 2 && (year % 4 == 0 || (year % 400 == 0)))
    printf("O mês tem 29 dias.\n");
    else if(month == 2 && (year % 4 != 0))
    printf("O mês tem 28 dias.\n");
    else printf("O mês introduzido não é válido.\n");

    return 0;

    
}