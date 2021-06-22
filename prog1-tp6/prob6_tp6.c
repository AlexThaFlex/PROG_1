#include <stdio.h>
//mal
int main()
{
    float v[15], aux;
    int i = 0, min = 0;

    while(i < 15){
        printf("Introduza um elemento: "); 
        scanf("%f", &v[i]);
        printf("Vetor: {");
          for(i = 0; min < i; min++){
            for(int j; j < 15; j++){
                if(v[i] < v[j]){
                     aux = v[i]; v[i] = v[j]; v[j] = aux;
                }
            }
    
    }
    while(i < 15) 
    printf("%.1f", v[i]);
    printf("}\n");
    i++;
}
return 0;
}