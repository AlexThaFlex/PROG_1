#include <stdio.h>
#include <math.h>

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
int sum_v(float x[], int n, float vRet[]){
    for(int j = 0; j < n; j+2)
    vRet[j/2] = x[j] + x[j+1];
       return n/2;
}

float range_v(float x[]){
  float max = -99999, min= 99999, amp;
  for(int i = 0; i < 15; i++){
      if(x[i] > max) max = x[i];
      if(x[i] < min) min = x[i];
  }
  amp = max - min;
  return amp;
}

int diff_v(float x[], int n, float vRet[]){
float medgeo;
for (int i = 0; i < n; i+2){
medgeo = sqrt(x[i] + x[i+1]);
for(int j = 0; j < n; j++){
vRet[j] =  medgeo - vRet[j];
if (vRet[j] < 0) vRet[j] = -vRet[j];
}
}
return vRet;
}




int main(){
    float v[15], vRet[15], amp;
    int n = 15;
    preencher_vetor(v, n);
    printf("Vetor Soma: "); imprimir_vetor(v, n);
    printf("Gama: %.1f", v[14]);
    printf("valor do desvio Max Par: "); imprimir_vetor(diff_v(v, n, vRet), n);
    return 0;

}