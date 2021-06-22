#include <stdio.h>
int main(){
    int i=1;
    float t, tmin, tmax, tot = 0;

    tmax= 3; tmin= 5;
  
    for(i; i <= 24; i++){
        printf("Qual é o tempo de enchimento do %d iogurte?\n", i);
        scanf("%f", &t);
        
           if(t>3 && t<5){ 
           tot += t;
              if(t > tmax) tmax = t;
              if(t < tmin) tmin = t; 
    }
    
}

    printf("Tempo mímimo de enchimento: %.2f\n", tmin);
    printf("Tempo máximo de enchimento: %.2f\n", tmax);
    printf("Tempo total: %d minutos, %d segundos e %d milésimos", (int)tot/60, (int) tot%60, (int)((tot- (int) tot)*1000));
 
     return 0;
}


