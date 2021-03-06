#include <stdio.h>
#include "datas.h"

/* Retorna a data correspondente ao dia seguinte da data d */
data diaSeguinte (data d){
  /* a implementar...  */
  data res = d;
  if(d.dia + 1 > diasDoMes(d.mes, d.ano))
  {
    if(d.mes == 12)
    {
      res.mes = 1;
      res.ano++;
    }
    else
      res.mes++;
    res.dia = 1;
  }
  else
    res.dia++;
  return res;
}
  

/* Retorna a data correspondente ao dia anterior à data d  */
data diaAnterior (data d){
  data res = d;
  if(d.dia - 1 < 1)
  {
    if(d.mes == 1)
    {
      res.mes = 12;
      res.ano--;
    }
    else
      res.mes--;
    res.dia = diasDoMes(d.mes, d.ano);
  }
  else
    res.dia--;
  return res;
}



/* Retorna a data correspondente a somar k dias à data d (k pode ser negativo)  */
data somaDias (data d, int k) {
  if(k > 0)
  {
    while(k > 0)
    {
      d = diaSeguinte(d);
      k--;
    }
  }
  else
  {
    while(k < 0)
    {
      d = diaAnterior(d);
      k++;
    }
  }
  return d;
}
  return d;
}

int bissexto(int ano) {
  if (((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0))
    return 1;
  return 0;
}

int diasDoMes(int mes, int ano) {
   int ndias[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   
   if (bissexto(ano))
     ndias[1]++;
   
   return ndias[mes-1];
}

int dataValida(data d) {
    if (d.ano < 1)
      return 0;
    if (d.mes < 1 || d.mes > 12)
      return 0;
    if (d.dia < 1 || d.dia > diasDoMes(d.mes, d.ano))
      return 0;
    
    return 1;
}

void escreveData(char destino[], data d) {
  char meses[12][10] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"}; 
  sprintf(destino, "%02d de %s de %d", d.dia, meses[d.mes-1], d.ano);
}