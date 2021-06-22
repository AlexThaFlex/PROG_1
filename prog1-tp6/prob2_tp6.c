#include <stdio.h>

int contarepeticao(int v[], int tamanhovetor, int numero){
    int cont = 0, mcont = 0;
      for(int i = 0; i < tamanhovetor; i++){
          if(v[i] == numero)
          cont++;
          else{
            if(cont > mcont) mcont = cont;
            cont = 0;
          }
      }
    return mcont;
}


int main() {
    int v[100];
    int tam = 0, n;
    for(tam = 0; tam < 100; tam++){
        printf("Introduza um numero: ");
        scanf("%d", &n);
          if(n < 0) break;
          v[tam] = n;
    }
    printf("Número a pesquisar: \n");
    scanf("%d", & n);

    printf("Maior sequência com numeros %d tem tamanho %d \n", n, contarepeticao(v, tam, n));
}