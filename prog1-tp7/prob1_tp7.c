#include <stdio.h>

int *vmaior(int *valor1, int *valor2){
if(*valor1 > *valor2) return valor1;
else return valor2 ;
 }


int main(){
    int n1, n2;

    printf("Insira dois valores: ");
    scanf("%d %d", &n1, &n2);
    
    printf("Endereço do maior: %p\n",  vmaior(&n1,&n2));
    printf("Valor: %d\n",  *vmaior(&n1,&n2));
    return 0;
}