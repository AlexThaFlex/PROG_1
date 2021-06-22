#include <stdio.h>
float media(float sum, float cont){
    float med;
    med = sum / cont;
    return med;
}

//finished
int main() {
    float num, med, max, min, cont = 0, sum = 0;
    scanf("%f", &num);
    sum += num;
        cont++;
        max = num; min = num;
    while(1){
        if (scanf("%f", &num) != 1) // aqui já faz scanf
    break;
        else
    {
        
        sum += num;
        cont++;
        if (num > max)
        {
            max = num;
        }
        if (num < min) 
        min = num;
        
    }
    
}
         printf("A média dos números é %.3f, o máximo é %.3f, o mínimo é %.3f \n", media(sum, cont), max, min);

return 0;
}