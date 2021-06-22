#include <stdio.h>
#include <limits.h>

int main()
{
    int ara[] = {900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char * rom[] = {"CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    int num;
    printf("Introduza um número: "); scanf("%d", &num);
    
    while(num > 0)
    {   
        for(int i = 0; i < sizeof(ara)/sizeof(int); i++) {
            if(num >= ara[i]) {
                num -= ara[i];
                printf("%s", rom[i]);
                break;
            }
        } 
    }
    printf("\n");
}