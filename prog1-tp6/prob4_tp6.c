#include <stdio.h>

void preencher_vetor(float v[], int n){
   int i;
      for(i = 0; i < n; i++){
          printf("Introduza o elemento %d: ", i+1); scanf("%f", &v[i]);
      }
}
void imprimir_vetor(float v[], int n){
    printf("{");
    for(int i=0; i < n; i++)
      printf(" %.1f", v[i]);
    printf("} ");  
}
float avg(float x[]) {
    float med;
    float sum = 0;
    for(int i= 0; i<10; i++) sum += x[i];
    med = sum / 10;
    return med;
}
float max(float x[]) {
     float cont = 0, mcont = 0;
     for(int i = 0; i < 10; i++){
     cont = x[i];
      if(cont > mcont) mcont = cont;
            cont = 0;
    
}
return mcont;
}
float min(float x[]){
        float cont = 0, min = 0;
     for(int i = 0; i < 10; i++){
     cont = x[i];
      if(cont < min) min = cont;
            cont = 0;
}
return min;
}



int main(){
    float v[10];
    
    preencher_vetor(v, 10);
    printf("Media: %.2f\n", avg(v));
    printf("Máximo: %.1f\n", max(v));
    printf("Mínimo: %.1f\n", min(v));
    printf("Vetor: ");  imprimir_vetor(v, 10);
    printf("\n");
    return 0;
}