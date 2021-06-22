#include <stdio.h>
#include <math.h>


int sum_v(float x[], int n, float vRet[]);
float range_v(float x[], int n);
int diff_v(float x[], int n, float vRet[]);
void preencher_vetor(float v[], int n);
void imprimir_vetor(float v[], int n);

int main()
{
    int n;
       do{
       printf("Quantos elementos pretende armazenar? \n");
        scanf("%d", &n);
        if(n > 15) printf("O numero de elementos esta limitado a 15!\n");
        else break;
       }
       while(1);

    float v[n], vRet[n];
    
    preencher_vetor(v,n);
    sum_v(v, n, vRet);
    printf("Vetor Soma: "); imprimir_vetor(vRet, sum_v(v,n,vRet));
    printf("\n");
    printf("Gama: %.1f", range_v(v, n));
    printf("\n");
    diff_v(v, n, vRet);
    printf("Vetor Desvio Max Par: "); imprimir_vetor(vRet, sum_v(v,n,vRet));
    printf("\n");
    return 0; 
}

void preencher_vetor(float v[], int n){
    int i;
      for(i = 0; i < n; i++){
          printf("Introduza o elemento %d: ", i+1);
          scanf("%f", &v[i]);
      }
}

void imprimir_vetor(float v[], int n){
    printf("{");
        for(int i=0; i<n; i++)
            printf("%.1f ", v[i]);
    printf("}");
}

int sum_v(float x[], int n, float vRet[]){
    for(int j=0; j < n; j++){ 
        vRet[j/2] = x[j] + x[j+1];
        j++;
    }
    return n/2;
}

float range_v(float x[], int n){
    float max = -99999, min= 99999, amp;
  for(int i = 0; i < n; i++){
      if(x[i] > max) max = x[i];
      if(x[i] < min) min = x[i];
  }
  amp = max - min;
  return amp;
}
//mal
int diff_v(float x[], int n, float vRet[]){
    for(int j=0; j < n; j++){       
        vRet[j/2] = sqrt(x[j] * x[j+1]) - vRet[j/2]; 
        j++; //j++?
    }
    for(int j=0; j < n; j++){       
        if(vRet[j/2] < 0) vRet[j/2] = -vRet[j/2];
        j++;
    } 
    return n/2;
}