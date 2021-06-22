#include <stdio.h>
#include "datas.h"

int main()
{
  data d;
  int n;
  char dest[100];

  do
  {
    printf("Data (dia mes ano): "); scanf("%d %d %d", &d.dia, &d.mes, &d.ano);
  } while(!dataValida(d));

  printf("numero de dias? "); scanf("%d", &n);

  escreveData(dest, somaDias(d, n));
  puts(dest);

    /* ler data
     validar data
     ler número de dias a avançar
     actualizar data
     imprimir data actualizada */

}
}
