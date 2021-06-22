#include <stdio.h> 
#define dim 111
void multiEspecial(int n, int v1[], int v2[], int vRet[]);

int main()
{
    int v1[dim], v2[dim], i=0, j, vRet[dim];
    printf("Vetor 1: ");
    while((scanf("%d", &v1[i])) == 1){
    i++; 
    } 
    printf("Vetor 2: ");
    for(j= 0; j < i; j++) scanf("%d", &v2[j]);
    for(i= 0; i < j/2; i++) v2[i] = v2[j-1];
    
    multiEspecial(i,v1,v2,vRet);
    return 0;
}
void multiEspecial(int n, int v1[], int v2[], int vRet[]){
        for(int i = 0; i < n; i++){
            vRet[i] = v1[i] * v2[i];
        }
    printf("{");
        for(int i=0; i<n; i++)
            printf("%d ", vRet[i]);
    printf("}");
    }
